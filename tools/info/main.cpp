/*
** Copyright (c) 2020 LunarG, Inc.
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

#include "project_version.h"

#include "decode/stat_consumer.h"
#include "decode/stat_consumer_base.h"
#include "decode/stat_decoder_base.h"
#include "decode/file_processor.h"
#include "format/format.h"
#include "format/format_util.h"
#include "generated/generated_vulkan_consumer.h"
#include "generated/generated_vulkan_decoder.h"
#include "decode/vulkan_detection_consumer.h"
#include <decode/vulkan_stats_consumer.h>
#if defined(WIN32)
#include <decode/dx12_stats_consumer.h>
#include "generated/generated_dx12_decoder.h"
#include "decode/dx12_detection_consumer.h"
#endif
#include "util/argument_parser.h"
#include "util/logging.h"
#include "util/to_string.h"

#include "vulkan/vulkan.h"

#include <cassert>
#include <cstdlib>
#include <limits>
#include <set>
#include <string>
#include <unordered_map>

const char kHelpShortOption[] = "-h";
const char kHelpLongOption[]  = "--help";
const char kVersionOption[]   = "--version";
const char kNoDebugPopup[]    = "--no-debug-popup";

const char kOptions[] = "-h|--help,--version,--no-debug-popup";

const char kUnrecognizedFormatString[] = "<unrecognized-format>";

static void PrintUsage(const char* exe_name)
{
    std::string app_name     = exe_name;
    size_t      dir_location = app_name.find_last_of("/\\");
    if (dir_location >= 0)
    {
        app_name.replace(0, dir_location + 1, "");
    }
    GFXRECON_WRITE_CONSOLE("\n%s - Print statistics for a GFXReconstruct capture file.\n", app_name.c_str());
    GFXRECON_WRITE_CONSOLE("Usage:");
    GFXRECON_WRITE_CONSOLE("  %s [-h | --help] [--version] <file>\n", app_name.c_str());
    GFXRECON_WRITE_CONSOLE("Required arguments:");
    GFXRECON_WRITE_CONSOLE("  <file>\t\tThe GFXReconstruct capture file to be processed.");
    GFXRECON_WRITE_CONSOLE("\nOptional arguments:");
    GFXRECON_WRITE_CONSOLE("  -h\t\t\tPrint usage information and exit (same as --help).");
    GFXRECON_WRITE_CONSOLE("  --version\t\tPrint version information and exit.");
#if defined(WIN32) && defined(_DEBUG)
    GFXRECON_WRITE_CONSOLE("  --no-debug-popup\tDisable the 'Abort, Retry, Ignore' message box");
    GFXRECON_WRITE_CONSOLE("        \t\tdisplayed when abort() is called (Windows debug only).");
#endif
}

static bool CheckOptionPrintUsage(const char* exe_name, const gfxrecon::util::ArgumentParser& arg_parser)
{
    if (arg_parser.IsOptionSet(kHelpShortOption) || arg_parser.IsOptionSet(kHelpLongOption))
    {
        PrintUsage(exe_name);
        return true;
    }

    return false;
}

static bool CheckOptionPrintVersion(const char* exe_name, const gfxrecon::util::ArgumentParser& arg_parser)
{
    if (arg_parser.IsOptionSet(kVersionOption))
    {
        std::string app_name     = exe_name;
        size_t      dir_location = app_name.find_last_of("/\\");

        if (dir_location >= 0)
        {
            app_name.replace(0, dir_location + 1, "");
        }

        GFXRECON_WRITE_CONSOLE("%s version info:", app_name.c_str());
        GFXRECON_WRITE_CONSOLE("  GFXReconstruct Version %s", GFXRECON_PROJECT_VERSION_STRING);
        GFXRECON_WRITE_CONSOLE("  Vulkan Header Version %u.%u.%u",
                               VK_VERSION_MAJOR(VK_HEADER_VERSION_COMPLETE),
                               VK_VERSION_MINOR(VK_HEADER_VERSION_COMPLETE),
                               VK_VERSION_PATCH(VK_HEADER_VERSION_COMPLETE));

        return true;
    }

    return false;
}

static std::string GetVersionString(uint32_t api_version)
{
    uint32_t major = api_version >> 22;
    uint32_t minor = (api_version >> 12) & 0x3ff;
    uint32_t patch = api_version & 0xfff;

    return std::to_string(major) + "." + std::to_string(minor) + "." + std::to_string(patch);
}

bool DetectAPIs(const std::string& input_filename, bool& dx12_detected, bool& vulkan_detected)
{
    dx12_detected   = false;
    vulkan_detected = false;

    gfxrecon::decode::FileProcessor file_processor;
    if (file_processor.Initialize(input_filename))
    {
        gfxrecon::decode::VulkanDetectionConsumer vulkan_detection_consumer;
        gfxrecon::decode::VulkanDecoder           vulkan_decoder;
        vulkan_decoder.AddConsumer(&vulkan_detection_consumer);
        file_processor.AddDecoder(&vulkan_decoder);
#if defined(WIN32)
        gfxrecon::decode::Dx12DetectionConsumer dx12_detection_consumer;
        gfxrecon::decode::Dx12Decoder           dx12_decoder;
        dx12_decoder.AddConsumer(&dx12_detection_consumer);
        file_processor.AddDecoder(&dx12_decoder);
#endif
        file_processor.ProcessAllFrames();
#if defined(WIN32)
        if (dx12_detection_consumer.WasD3D12APIDetected())
        {
            dx12_detected = true;
        }
#endif
        if (vulkan_detection_consumer.WasVulkanAPIDetected())
        {
            vulkan_detected = true;
        }
    }
    return dx12_detected || vulkan_detected;
}

void GatherVulkanStats(const std::string& input_filename)
{
    gfxrecon::decode::FileProcessor file_processor;
    if (file_processor.Initialize(input_filename))
    {
        gfxrecon::decode::VulkanDecoder       vulkan_decoder;
        gfxrecon::decode::VulkanStatsConsumer vulkan_stats_consumer;
        gfxrecon::decode::StatDecoderBase     stat_decoder;
        gfxrecon::decode::StatConsumer        stat_consumer;

        vulkan_decoder.AddConsumer(&vulkan_stats_consumer);
        file_processor.AddDecoder(&vulkan_decoder);
        stat_decoder.AddConsumer(&stat_consumer);
        file_processor.AddDecoder(&stat_decoder);

        file_processor.ProcessAllFrames();

        if ((file_processor.GetCurrentFrameNumber() > 0) &&
            file_processor.GetErrorState() == gfxrecon::decode::FileProcessor::kErrorNone)
        {
            GFXRECON_WRITE_CONSOLE("File info:");
            // File options.
            gfxrecon::format::CompressionType compression_type = gfxrecon::format::CompressionType::kNone;

            auto file_options = file_processor.GetFileOptions();
            for (const auto& option : file_options)
            {
                if (option.key == gfxrecon::format::FileOption::kCompressionType)
                {
                    compression_type = static_cast<gfxrecon::format::CompressionType>(option.value);
                }
            }

            // Compression type.
            std::string compression_type_name = gfxrecon::format::GetCompressionTypeName(compression_type);
            if (!compression_type_name.empty())
            {
                GFXRECON_WRITE_CONSOLE("\tCompression format: %s", compression_type_name.c_str());
            }
            else
            {
                GFXRECON_WRITE_CONSOLE("\tCompression format: %s", kUnrecognizedFormatString);
            }

            // Frame counts.
            uint32_t trim_start_frame = stat_consumer.GetTrimmedStartFrame();
            uint32_t frame_count      = file_processor.GetCurrentFrameNumber();

            if (trim_start_frame == 0)
            {
                // Not a trimmed file.
                GFXRECON_WRITE_CONSOLE("\tTotal frames: %u", frame_count);
            }
            else
            {
                // Include the frame range for trimmed files.
                GFXRECON_WRITE_CONSOLE("\tTotal frames: %u (trimmed frame range %u-%u)",
                                       frame_count,
                                       trim_start_frame,
                                       trim_start_frame + frame_count - 1);
            }
            GFXRECON_WRITE_CONSOLE("\nApplication info:");
            GFXRECON_WRITE_CONSOLE("\tApplication exe name: %s", stat_consumer.GetAppExeName().c_str());

            uint32_t api_version = vulkan_stats_consumer.GetApiVersion();

            GFXRECON_WRITE_CONSOLE("\tApplication name: %s", vulkan_stats_consumer.GetAppName().c_str());
            GFXRECON_WRITE_CONSOLE("\tApplication version: %u", vulkan_stats_consumer.GetAppVersion());
            GFXRECON_WRITE_CONSOLE("\tEngine name: %s", vulkan_stats_consumer.GetEngineName().c_str());
            GFXRECON_WRITE_CONSOLE("\tEngine version: %u", vulkan_stats_consumer.GetEngineVersion());
            GFXRECON_WRITE_CONSOLE("\tTarget API version: %u (%s)", api_version, GetVersionString(api_version).c_str());
            // Properties for physical devices used to create logical devices.
            std::vector<const VkPhysicalDeviceProperties*> used_device_properties;
            auto used_devices = vulkan_stats_consumer.GetInstantiatedDevices();
            for (auto entry : used_devices)
            {
                auto properties = vulkan_stats_consumer.GetDeviceProperties(entry);
                if (properties != nullptr)
                {
                    used_device_properties.push_back(properties);
                }
            }
            // Don't print anything if no queries were made for VkPhysicalDeviceProperties.
            if (!used_device_properties.empty())
            {
                for (auto entry : used_device_properties)
                {
                    GFXRECON_WRITE_CONSOLE("\nPhysical device info:");
                    GFXRECON_WRITE_CONSOLE("\tDevice name: %s", entry->deviceName);
                    GFXRECON_WRITE_CONSOLE("\tDevice ID: 0x%x", entry->deviceID);
                    GFXRECON_WRITE_CONSOLE("\tVendor ID: 0x%x", entry->vendorID);
                    GFXRECON_WRITE_CONSOLE("\tDriver version: %u (0x%x)", entry->driverVersion, entry->driverVersion);
                    GFXRECON_WRITE_CONSOLE(
                        "\tAPI version: %u (%s)", entry->apiVersion, GetVersionString(entry->apiVersion).c_str());
                }
            }
            GFXRECON_WRITE_CONSOLE("\nDevice memory allocation info:");
            GFXRECON_WRITE_CONSOLE("\tTotal allocations: %" PRIu64, vulkan_stats_consumer.GetAllocationCount());
            GFXRECON_WRITE_CONSOLE("\tMin allocation size: %" PRIu64, vulkan_stats_consumer.GetMinAllocationSize());
            GFXRECON_WRITE_CONSOLE("\tMax allocation size: %" PRIu64, vulkan_stats_consumer.GetMaxAllocationSize());
            GFXRECON_WRITE_CONSOLE("\nPipeline info:");
            GFXRECON_WRITE_CONSOLE("\tTotal graphics pipelines: %" PRIu64,
                                   vulkan_stats_consumer.GetGraphicsPipelineCount());
            GFXRECON_WRITE_CONSOLE("\tTotal compute pipelines: %" PRIu64,
                                   vulkan_stats_consumer.GetComputePipelineCount());

            // TODO: This is the number of recorded draw calls, which will not reflect the number of draw calls executed
            // when recorded once to a command buffer that is submitted/replayed more than once.
            // GFXRECON_WRITE_CONSOLE("\nDraw/dispatch call info:");
            // GFXRECON_WRITE_CONSOLE("\tTotal draw calls: %" PRIu64, vulkan_stats_consumer.GetDrawCount());
            // GFXRECON_WRITE_CONSOLE("\tTotal dispatch calls: %" PRIu64, vulkan_stats_consumer.GetDispatchCount());
        }
        else if (file_processor.GetErrorState() != gfxrecon::decode::FileProcessor::kErrorNone)
        {
            GFXRECON_WRITE_CONSOLE("A failure has occurred during file processing");
            gfxrecon::util::Log::Release();
            exit(-1);
        }
        else
        {
            GFXRECON_WRITE_CONSOLE("File did not contain any frames");
        }
    }
}

void GatherD3D12Stats(const std::string& input_filename)
{
#if defined(WIN32)
    gfxrecon::decode::FileProcessor file_processor;
    if (file_processor.Initialize(input_filename))
    {
        gfxrecon::decode::StatDecoderBase stat_decoder;
        gfxrecon::decode::StatConsumer    stat_consumer;
        stat_decoder.AddConsumer(&stat_consumer);
        file_processor.AddDecoder(&stat_decoder);

        gfxrecon::decode::Dx12Decoder       dx12_decoder;
        gfxrecon::decode::Dx12StatsConsumer dx12_consumer;
        dx12_decoder.AddConsumer(&dx12_consumer);

        file_processor.AddDecoder(&dx12_decoder);

        file_processor.ProcessAllFrames();
        if (file_processor.GetErrorState() == gfxrecon::decode::FileProcessor::kErrorNone)
        {
            GFXRECON_WRITE_CONSOLE("File info:");
            // File options.
            gfxrecon::format::CompressionType compression_type = gfxrecon::format::CompressionType::kNone;

            auto file_options = file_processor.GetFileOptions();
            for (const auto& option : file_options)
            {
                if (option.key == gfxrecon::format::FileOption::kCompressionType)
                {
                    compression_type = static_cast<gfxrecon::format::CompressionType>(option.value);
                }
            }

            // Compression type.
            std::string compression_type_name = gfxrecon::format::GetCompressionTypeName(compression_type);
            if (!compression_type_name.empty())
            {
                GFXRECON_WRITE_CONSOLE("\tCompression format: %s", compression_type_name.c_str());
            }
            else
            {
                GFXRECON_WRITE_CONSOLE("\tCompression format: %s", kUnrecognizedFormatString);
            }

            // Frame counts.
            uint32_t trim_start_frame = stat_consumer.GetTrimmedStartFrame();
            uint32_t frame_count      = file_processor.GetCurrentFrameNumber();

            if (trim_start_frame == 0)
            {
                // Not a trimmed file.
                GFXRECON_WRITE_CONSOLE("\tTotal frames: %u", frame_count);
            }
            else
            {
                // Include the frame range for trimmed files.
                GFXRECON_WRITE_CONSOLE("\tTotal frames: %u (trimmed frame range %u-%u)",
                                       frame_count,
                                       trim_start_frame,
                                       trim_start_frame + frame_count - 1);
            }
            GFXRECON_WRITE_CONSOLE("\nApplication info:");
            GFXRECON_WRITE_CONSOLE("\tApplication exe name: %s", stat_consumer.GetAppExeName().c_str());

            auto exe_version = stat_consumer.GetAppVersion();
            GFXRECON_WRITE_CONSOLE(
                "\tApplication version: %d.%d.%d.%d", exe_version[0], exe_version[1], exe_version[2], exe_version[3]);
            GFXRECON_WRITE_CONSOLE("\tApplication Company name: %s", stat_consumer.GetCompanyName());
            // we are combining file description and product name and presenting both only if they are not same
            std::string app_data = stat_consumer.GetFileDescription();
            if (strcmp(stat_consumer.GetProductName(), "N/A") != 0)
            {
                if (strcmp(stat_consumer.GetProductName(), stat_consumer.GetFileDescription()) != 0)
                {
                    app_data += " // ";
                    app_data += stat_consumer.GetProductName();
                }
            }

            GFXRECON_WRITE_CONSOLE("\tAdapter Description: %s",
                                   gfxrecon::util::WCharArrayToString(dx12_consumer.GetAdapterDescription()).c_str());
            GFXRECON_WRITE_CONSOLE("\tVendor ID: 0x%x", dx12_consumer.GetVendorID());
            GFXRECON_WRITE_CONSOLE("\tDevice ID: 0x%x", dx12_consumer.GetDeviceID());
            GFXRECON_WRITE_CONSOLE("\tSubsys ID: 0x%x", dx12_consumer.GetSubsysID());
            GFXRECON_WRITE_CONSOLE("\tRevision: %u", dx12_consumer.GetRevision());
            GFXRECON_WRITE_CONSOLE("\tDedicated Video Memory: %u", dx12_consumer.GetDedicatedVideoMemory());
            GFXRECON_WRITE_CONSOLE("\tDedicated System Memory: %u", dx12_consumer.GetDedicatedSystemMemory());
            GFXRECON_WRITE_CONSOLE("\tShared System Memory: %u", dx12_consumer.GetSharedSystemMemory());
            GFXRECON_WRITE_CONSOLE(
                "\tAdapter LUID:%u %u", dx12_consumer.GetAdapterLUIDHighPart(), dx12_consumer.GetAdapterLUIDLowPart());
        }
        else if (file_processor.GetErrorState() != gfxrecon::decode::FileProcessor::kErrorNone)
        {
            GFXRECON_WRITE_CONSOLE("A failure has occurred during file processing");
            gfxrecon::util::Log::Release();
            exit(-1);
        }
        else
        {
            GFXRECON_WRITE_CONSOLE("File did not contain any frames");
        }
    }
#endif
}

int main(int argc, const char** argv)
{
    gfxrecon::util::Log::Init();

    gfxrecon::util::ArgumentParser arg_parser(argc, argv, kOptions, "");

    if (CheckOptionPrintUsage(argv[0], arg_parser) || CheckOptionPrintVersion(argv[0], arg_parser))
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
#if defined(WIN32) && defined(_DEBUG)
        if (arg_parser.IsOptionSet(kNoDebugPopup))
        {
            _set_abort_behavior(0, _WRITE_ABORT_MSG | _CALL_REPORTFAULT);
        }
#endif
    }

    const std::vector<std::string>& positional_arguments = arg_parser.GetPositionalArguments();
    std::string                     input_filename       = positional_arguments[0];

    bool detected_d3d12  = false;
    bool detected_vulkan = false;

    if (DetectAPIs(input_filename, detected_d3d12, detected_vulkan))
    {
        if (detected_d3d12)
        {
            GatherD3D12Stats(input_filename);
        }

        if (detected_vulkan)
        {
            GatherVulkanStats(input_filename);
        }
    }

    gfxrecon::util::Log::Release();
    return 0;
}
