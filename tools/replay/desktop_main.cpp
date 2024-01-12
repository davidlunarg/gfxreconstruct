/*
** Copyright (c) 2018-2020 Valve Corporation
** Copyright (c) 2018-2020 LunarG, Inc.
** Copyright (c) 2022-2023 Advanced Micro Devices, Inc. All rights reserved.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the "Software"),
** to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
*/

#include "replay_settings.h"

#include "application/application.h"
#include "decode/file_processor.h"
#include "decode/vulkan_replay_options.h"
#include "decode/vulkan_tracked_object_info_table.h"
#include "generated/generated_vulkan_decoder.h"
#include "generated/generated_vulkan_replay_consumer.h"
#include "graphics/fps_info.h"
#include "util/argument_parser.h"
#include "util/logging.h"
#include "json/json.h"

#if defined(D3D12_SUPPORT)
#include "generated/generated_dx12_decoder.h"
#include "generated/generated_dx12_replay_consumer.h"
#ifdef GFXRECON_AGS_SUPPORT
#include "decode/custom_ags_consumer_base.h"
#include "decode/custom_ags_decoder.h"
#include "decode/custom_ags_replay_consumer.h"
#endif // GFXRECON_AGS_SUPPORT
#include "decode/dx12_tracking_consumer.h"
#include "graphics/dx12_util.h"
#endif

#include <exception>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>
#include <utility>

#if defined(D3D12_SUPPORT)

extern "C"
{
    __declspec(dllexport) extern const UINT D3D12SDKVersion = 610;
}
extern "C"
{
    __declspec(dllexport) extern const char* D3D12SDKPath = u8".\\D3D12\\";
}

#include <conio.h>
void WaitForExit()
{
    DWORD process_list[2];
    DWORD result = GetConsoleProcessList(process_list, ARRAYSIZE(process_list));

    // If the process list contains a single entry, we assume that the console was created when the gfxrecon-replay.exe
    // process started, and will be destroyed when it exits.  In this case, we will wait on user input before exiting
    // and closing the console window to give the user a chance to read any console output.
    if (result <= 1)
    {
        GFXRECON_WRITE_CONSOLE("\nPress any key to close this window . . .");
        while (!_kbhit())
        {
            Sleep(250);
        }
    }
}
#else
void WaitForExit() {}
#endif

static std::string to_lower(std::string s)
{
   for (char &c: s)
   {
       c = tolower(c);
   }
   return s;
}

static bool ends_with(std::string const &fullString, std::string const &ending)
{
    bool rval = false;
    if (fullString.length() >= ending.length())
    {
        rval = (0 == fullString.compare(fullString.length() - ending.length(), ending.length(), ending));
    }
    return rval;
}

const char kLayerEnvVar[] = "VK_INSTANCE_LAYERS";

int main(int argc, const char** argv)
{
    int return_code = 0;

    // Default initialize logging to report issues while loading settings.
    gfxrecon::util::Log::Init(gfxrecon::decode::kDefaultLogLevel);

    gfxrecon::util::ArgumentParser arg_parser(argc, argv, kOptions, kArguments);

    if (CheckOptionPrintVersion(argv[0], arg_parser) || CheckOptionPrintUsage(argv[0], arg_parser))
    {
        gfxrecon::util::Log::Release();
        exit(0);
    }
    else if (arg_parser.IsInvalid() || (arg_parser.GetPositionalArgumentsCount() != 1))
    {
        PrintUsage(argv[0]);
        gfxrecon::util::Log::Release();
        exit(-1);
    }
    else
    {
        ProcessDisableDebugPopup(arg_parser);
    }

    // Reinitialize logging with values retrieved from command line arguments
    gfxrecon::util::Log::Settings log_settings;
    GetLogSettings(arg_parser, log_settings);
    gfxrecon::util::Log::Release();
    gfxrecon::util::Log::Init(log_settings);

    try
    {
        const std::vector<std::string>& positional_arguments = arg_parser.GetPositionalArguments();
        std::string                     filename             = positional_arguments[0];

        gfxrecon::decode::FileProcessor file_processor;
        if (!file_processor.Initialize(filename))
        {
            return_code = -1;
        }
        else
        {
            // Select WSI context based on CLI
            std::string wsi_extension = GetWsiExtensionName(GetWsiPlatform(arg_parser));
            auto        application =
                std::make_shared<gfxrecon::application::Application>(kApplicationName, wsi_extension, &file_processor);

            gfxrecon::decode::VulkanTrackedObjectInfoTable tracked_object_info_table;
            gfxrecon::decode::VulkanReplayOptions          vulkan_replay_options =
                GetVulkanReplayOptions(arg_parser, filename, &tracked_object_info_table);

            // Process --dump-resources param. We do it here so that other gfxr tools that use
            // the VulkanReplayOptions class won't have to link in the json library.
            if (!vulkan_replay_options.dump_resources.empty())
            {
                // Check to see if dump-resource arg value is a json file.  Do this
                // by simply checking the file name extenstion.
                if (ends_with(to_lower(vulkan_replay_options.dump_resources), ".json"))
                {
                    try
                    {
                        std::ifstream dr_json_file(vulkan_replay_options.dump_resources, std::ifstream::binary);
                        Json::Value   jargs;
                        dr_json_file >> jargs;

                        // Transfer jargs to vectors in vulkan_replay_options
                        for (int idx0=0; idx0 <jargs["BeginCommandBuffer"].size(); idx0++)
                        {
                            vulkan_replay_options.BeginCommandBuffer_Indices.push_back(jargs["BeginCommandBuffer"][idx0].asUInt64());
                        }
                        for (int idx0=0; idx0 <jargs["CmdDraw"].size(); idx0++)
                        {
                            vulkan_replay_options.CmdDraw_Indices.push_back(std::vector<uint64_t>());
                            for (int idx1=0; idx1 <jargs["CmdDraw"][idx0].size(); idx1++)
                            {
                                vulkan_replay_options.CmdDraw_Indices[idx0].push_back(jargs["CmdDraw"][idx0][idx1].asUInt64());
                            }
                        }
                        for (int idx0=0; idx0 <jargs["RenderPass"].size(); idx0++)
                        {
                            vulkan_replay_options.RenderPass_Indices.push_back(std::vector<std::vector<uint64_t>>());
                            for (int idx1=0; idx1 <jargs["RenderPass"][idx0].size(); idx1++)
                            {
                                vulkan_replay_options.RenderPass_Indices[idx0].push_back(std::vector<uint64_t>());
                                for (int idx2=0; idx2 <jargs["RenderPass"][idx0][idx1].size(); idx2++)
                                {
                                    vulkan_replay_options.RenderPass_Indices[idx0][idx1].push_back(jargs["RenderPass"][idx0][idx1][idx2].asUInt64());
                                }
                            }
                        }
                        for (int idx0=0; idx0 <jargs["NextSubPass"].size(); idx0++)
                        {
                            vulkan_replay_options.NextSubPass_Indices.push_back(std::vector<std::vector<uint64_t>>());
                            for (int idx1=0; idx1 <jargs["NextSubPass"][idx0].size(); idx1++)
                            {
                                vulkan_replay_options.NextSubPass_Indices[idx0].push_back(std::vector<uint64_t>());
                                for (int idx2=0; idx2 <jargs["NextSubPass"][idx0][idx1].size(); idx2++)
                                {
                                    jargs["NextSubPass"][idx0][idx1][idx2].asUInt64();   // DEBUG
                                    vulkan_replay_options.NextSubPass_Indices[idx0][idx1].push_back(jargs["NextSubPass"][idx0][idx1][idx2].asUInt64());
                                }
                            }
                        }
                        for (int idx0=0; idx0 <jargs["CmdDispatch"].size(); idx0++)
                        {
                            vulkan_replay_options.CmdDispatch_Indices.push_back(std::vector<uint64_t>());
                            for (int idx1=0; idx1 <jargs["CmdDispatch"][idx0].size(); idx1++)
                            {
                                vulkan_replay_options.CmdDispatch_Indices[idx0].push_back(jargs["CmdDispatch"][idx0][idx1].asUInt64());
                            }
                        }
                        for (int idx0=0; idx0 <jargs["CmdTraceRays"].size(); idx0++)
                        {
                            vulkan_replay_options.CmdTraceRaysKHR_Indices.push_back(std::vector<uint64_t>());
                            for (int idx1=0; idx1 <jargs["CmdTraceRays"][idx0].size(); idx1++)
                            {
                                vulkan_replay_options.CmdTraceRaysKHR_Indices[idx0].push_back(jargs["CmdTraceRays"][idx0][idx1].asUInt64());
                            }
                        }
                        for (int idx0=0; idx0 <jargs["QueueSubmit"].size(); idx0++)
                        {
                            vulkan_replay_options.QueueSubmit_Indices.push_back(jargs["QueueSubmit"][idx0].asUInt64());
                        }

                        exit(0);  // TODO: For turnon. Remove me.
                    }
                    catch (...)
                    {
                        GFXRECON_LOG_ERROR("Error reading file %s. Bad json format?", vulkan_replay_options.dump_resources.c_str());
                        exit(0);
                    }
                 }
                 else
                 {
                     // Check to see if dump-resource arg value is a file. If it is, read the dump args from the file.
                     // Allow either spaces or commas to separate fields in the file.
                     std::ifstream infile(vulkan_replay_options.dump_resources);
                     std::vector<std::string> drargs;
                     if (!infile.fail())
                     {
                         bool err = false;
                         for (std::string line; std::getline(infile, line); )
                         {
                             // Remove leading and trailing spaces
                             line.erase(0, line.find_first_not_of(" "));
                             line.erase(line.find_last_not_of(" ")+1);
             
                             // Remove instances of multiple spaces.
                             // This is slow and inefficient, but it's compact code
                             // and the loop should be executed only a few times.
                             while (line.find("  ") != std::string::npos)
                             {
                                 line.replace(line.find("  "), 2, " ");
                             }
             
                             // Replace spaces with commas
                             std::replace(line.begin(), line.end(), ' ', ',');
             
                             // Save the modified line
                             drargs.push_back(line);
                         }
                     }
                     else
                     {
                         // dump-resource args are all specified on the command line
                         drargs.push_back(vulkan_replay_options.dump_resources);
                     }

                     // TODO: ....Process dump_resources arg lines from drargs...
                     exit(0);
                }
            }


            uint32_t start_frame = 0;
            uint32_t end_frame   = 0;

            bool        has_mfr                            = false;
            bool        quit_after_measurement_frame_range = false;
            bool        flush_measurement_frame_range      = false;
            std::string measurement_file_name;

            if (vulkan_replay_options.enable_vulkan)
            {
                has_mfr                            = GetMeasurementFrameRange(arg_parser, start_frame, end_frame);
                quit_after_measurement_frame_range = vulkan_replay_options.quit_after_measurement_frame_range;
                flush_measurement_frame_range      = vulkan_replay_options.flush_measurement_frame_range;
            }

            if (has_mfr)
            {
                GetMeasurementFilename(arg_parser, measurement_file_name);
            }

            gfxrecon::graphics::FpsInfo fps_info(static_cast<uint64_t>(start_frame),
                                                 static_cast<uint64_t>(end_frame),
                                                 has_mfr,
                                                 quit_after_measurement_frame_range,
                                                 flush_measurement_frame_range,
                                                 measurement_file_name);

            gfxrecon::decode::VulkanReplayConsumer vulkan_replay_consumer(application, vulkan_replay_options);
            gfxrecon::decode::VulkanDecoder        vulkan_decoder;

            if (vulkan_replay_options.enable_vulkan)
            {
                vulkan_replay_consumer.SetFatalErrorHandler(
                    [](const char* message) { throw std::runtime_error(message); });
                vulkan_replay_consumer.SetFpsInfo(&fps_info);

                vulkan_decoder.AddConsumer(&vulkan_replay_consumer);
                file_processor.AddDecoder(&vulkan_decoder);
            }

#if defined(D3D12_SUPPORT)
            gfxrecon::decode::DxReplayOptions    dx_replay_options = GetDxReplayOptions(arg_parser, filename);
            gfxrecon::decode::Dx12ReplayConsumer dx12_replay_consumer(application, dx_replay_options);
            gfxrecon::decode::Dx12Decoder        dx12_decoder;

#ifdef GFXRECON_AGS_SUPPORT
            gfxrecon::decode::AgsReplayConsumer ags_replay_consumer;
            gfxrecon::decode::AgsDecoder        ags_decoder;
#endif // GFXRECON_AGS_SUPPORT

            if (dx_replay_options.enable_d3d12)
            {
                application->InitializeDx12WsiContext();
                if (gfxrecon::graphics::dx12::VerifyAgilitySDKRuntime() == false)
                {
                    GFXRECON_LOG_ERROR(
                        "Did not find Agility SDK runtimes. Verify \\D3D12\\D3D12Core.dll exists in the same "
                        "directory as gfxrecon-replay.exe.");
                }

                dx12_replay_consumer.SetFatalErrorHandler(
                    [](const char* message) { throw std::runtime_error(message); });
                dx12_replay_consumer.SetFpsInfo(&fps_info);

                // check for user option if first pass tracking is enabled
                if (dx_replay_options.enable_d3d12_two_pass_replay)
                {
                    gfxrecon::decode::FileProcessor              file_processor_tracking;
                    gfxrecon::decode::Dx12TrackedObjectInfoTable tracked_object_info_table;
                    auto                                         tracking_consumer =
                        new gfxrecon::decode::DX12TrackingConsumer(dx_replay_options, &tracked_object_info_table);
                    if (file_processor_tracking.Initialize(filename))
                    {
                        dx12_decoder.AddConsumer(tracking_consumer);
                        file_processor_tracking.AddDecoder(&dx12_decoder);
                        file_processor_tracking.ProcessAllFrames();
                        file_processor_tracking.RemoveDecoder(&dx12_decoder);
                        dx12_decoder.RemoveConsumer(tracking_consumer);
                    }
                }
                dx12_decoder.AddConsumer(&dx12_replay_consumer);
                file_processor.AddDecoder(&dx12_decoder);

#ifdef GFXRECON_AGS_SUPPORT
                ags_replay_consumer.AddDx12Consumer(&dx12_replay_consumer);
                ags_decoder.AddConsumer(reinterpret_cast<gfxrecon::decode::AgsConsumerBase*>(&ags_replay_consumer));

                file_processor.AddDecoder(&ags_decoder);
#endif // GFXRECON_AGS_SUPPORT
            }
#endif

            // Warn if the capture layer is active.
            CheckActiveLayers(gfxrecon::util::platform::GetEnv(kLayerEnvVar));

            fps_info.BeginFile();

            application->SetPauseFrame(GetPauseFrame(arg_parser));
            application->SetFpsInfo(&fps_info);
            application->Run();

            // XXX if the final frame ended with a Present, this would be the *next* frame
            // Add one so that it matches the trim range frame number semantic
            fps_info.EndFile(file_processor.GetCurrentFrameNumber() + 1);

            if ((file_processor.GetCurrentFrameNumber() > 0) &&
                (file_processor.GetErrorState() == gfxrecon::decode::FileProcessor::kErrorNone))
            {
                if (file_processor.GetCurrentFrameNumber() < start_frame)
                {
                    GFXRECON_LOG_WARNING(
                        "Measurement range start frame (%u) is greater than the last replayed frame (%u). "
                        "Measurements were never started, cannot calculate measurement range FPS.",
                        start_frame,
                        file_processor.GetCurrentFrameNumber());
                }
                else
                {
#if defined(D3D12_SUPPORT)
                    dx12_replay_consumer.PostReplay();
#endif

                    fps_info.LogToConsole();
                }
            }
            else if (file_processor.GetErrorState() != gfxrecon::decode::FileProcessor::kErrorNone)
            {
                GFXRECON_WRITE_CONSOLE("A failure has occurred during replay");
                return_code = -1;
            }
            else
            {
                GFXRECON_WRITE_CONSOLE("File did not contain any frames");
            }
        }
    }
    catch (const std::runtime_error& error)
    {
        GFXRECON_WRITE_CONSOLE("Replay has encountered a fatal error and cannot continue: %s", error.what());
        return_code = -1;
    }
    catch (const std::exception& error)
    {
        GFXRECON_WRITE_CONSOLE("Replay has encountered a fatal error and cannot continue: %s", error.what());
        return_code = -1;
    }
    catch (...)
    {
        GFXRECON_WRITE_CONSOLE("Replay failed due to an unhandled exception");
        return_code = -1;
    }

    WaitForExit();

    gfxrecon::util::Log::Release();

    return return_code;
}
