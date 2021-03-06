/*
** Copyright (c) 2018 Valve Corporation
** Copyright (c) 2018 LunarG, Inc.
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#include "application/application.h"
#include "decode/file_processor.h"
#include "decode/window.h"
#include "generated/generated_vulkan_decoder.h"
#include "generated/generated_vulkan_replay_consumer.h"
#include "util/argument_parser.h"
#include "util/date_time.h"
#include "util/logging.h"

#include <exception>
#include <memory>
#include <string>
#include <vector>

#if defined(WIN32)
#if defined(VK_USE_PLATFORM_WIN32_KHR)
#include "application/win32_application.h"
#include "application/win32_window.h"
#endif
#else
#if defined(VK_USE_PLATFORM_XCB_KHR)
#include "application/xcb_application.h"
#include "application/xcb_window.h"
#endif
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
#include "application/wayland_application.h"
#include "application/wayland_window.h"
#endif
#endif

const std::string kApplicationName = "GFXReconstruct Replay";
const char        kLayerEnvVar[]   = "VK_INSTANCE_LAYERS";
const char        kCaptureLayer[]  = "VK_LAYER_LUNARG_gfxreconstruct";

void CheckActiveLayers()
{
    std::string result = gfxrecon::util::platform::GetEnv(kLayerEnvVar);

    if (!result.empty())
    {
        if (result.find(kCaptureLayer) != std::string::npos)
        {
            GFXRECON_LOG_WARNING("Replay tool has detected that the capture layer is enabled");
        }
    }
}

void PrintUsage(const char* exe_name)
{
    std::string app_name     = exe_name;
    size_t      dir_location = app_name.find_last_of("/\\");
    if (dir_location >= 0)
    {
        app_name.replace(0, dir_location + 1, "");
    }
    GFXRECON_WRITE_CONSOLE("\n%s\tis a replay tool designed to playback GFXReconstruct capture files.\n",
                           app_name.c_str());
    GFXRECON_WRITE_CONSOLE("Usage:");
    GFXRECON_WRITE_CONSOLE("\t%s <file>\n", app_name.c_str());
    GFXRECON_WRITE_CONSOLE("\t<file>\t\tThe filename (including path if necessary) of the ");
    GFXRECON_WRITE_CONSOLE("\t\t\t\tcapture file to replay");
}

int main(int argc, const char** argv)
{
    int return_code = 0;
    std::string filename;

    gfxrecon::util::Log::Init();

    gfxrecon::util::ArgumentParser arg_parser(argc, argv, "", "", 1);

    if (arg_parser.IsInvalid() || (arg_parser.GetPositionalArgumentsCount() != 1))
    {
        PrintUsage(argv[0]);
        gfxrecon::util::Log::Release();
        exit(-1);
    }
    else
    {
        const std::vector<std::string>& positional_arguments = arg_parser.GetPositionalArguments();
        filename                                             = positional_arguments[0];
    }

    try
    {
        gfxrecon::decode::FileProcessor                     file_processor;
        std::unique_ptr<gfxrecon::application::Application> application;
        std::unique_ptr<gfxrecon::decode::WindowFactory>    window_factory;

        if (!file_processor.Initialize(filename))
        {
            return_code = -1;
        }
        else
        {
            // Setup platform specific application and window factory.
#if defined(WIN32)
#if defined(VK_USE_PLATFORM_WIN32_KHR)
            gfxrecon::application::Win32Application* win32_application =
                new gfxrecon::application::Win32Application(kApplicationName);
            application    = std::unique_ptr<gfxrecon::application::Application>(win32_application);
            window_factory = std::make_unique<gfxrecon::application::Win32WindowFactory>(win32_application);
#endif
#else
#if defined(VK_USE_PLATFORM_XCB_KHR)
            gfxrecon::application::XcbApplication* xcb_application =
                new gfxrecon::application::XcbApplication(kApplicationName);
            application    = std::unique_ptr<gfxrecon::application::Application>(xcb_application);
            window_factory = std::make_unique<gfxrecon::application::XcbWindowFactory>(xcb_application);
#elif defined(VK_USE_PLATFORM_WAYLAND_KHR)
            gfxrecon::application::WaylandApplication* wayland_application =
                new gfxrecon::application::WaylandApplication(kApplicationName);
            application    = std::unique_ptr<gfxrecon::application::Application>(wayland_application);
            window_factory = std::make_unique<gfxrecon::application::WaylandWindowFactory>(wayland_application);
#endif
#endif

            if (!window_factory || !application || !application->Initialize(&file_processor))
            {
                GFXRECON_WRITE_CONSOLE(
                    "Failed to initialize platform specific window system management.\nEnsure that the appropriate "
                    "Vulkan platform extensions have been enabled.");
                return_code = -1;
            }
            else
            {
                gfxrecon::decode::VulkanDecoder        decoder;
                gfxrecon::decode::VulkanReplayConsumer replay_consumer(window_factory.get());

                replay_consumer.SetFatalErrorHandler([](const char* message) { throw std::runtime_error(message); });

                decoder.AddConsumer(&replay_consumer);
                file_processor.AddDecoder(&decoder);

                // Warn if the capture layer is active.
                CheckActiveLayers();

                // Grab the start frame/time information for the FPS result.
                uint32_t start_frame = file_processor.GetCurrentFrameNumber();
                int64_t  start_time  = gfxrecon::util::datetime::GetTimestamp();

                application->Run();

                if (file_processor.GetErrorState() == gfxrecon::decode::FileProcessor::kErrorNone)
                {
                    // Grab the end frame/time information and calculate out FPS.
                    int64_t end_time      = gfxrecon::util::datetime::GetTimestamp();
                    double  diff_time_sec = gfxrecon::util::datetime::ConvertTimestampToSeconds(
                        gfxrecon::util::datetime::DiffTimestamps(start_time, end_time));
                    uint32_t end_frame    = file_processor.GetCurrentFrameNumber();
                    uint32_t total_frames = end_frame - start_frame;
                    double   fps          = static_cast<double>(total_frames) / diff_time_sec;
                    GFXRECON_WRITE_CONSOLE("%f fps, %f seconds, %u frame%s, 1 loop, framerange %u-%u",
                                           fps,
                                           diff_time_sec,
                                           total_frames,
                                           total_frames > 1 ? "s" : "",
                                           start_frame,
                                           end_frame - 1);
                }
                else
                {
                    GFXRECON_WRITE_CONSOLE("A failure has occurred during replay");
                    return_code = -1;
                }
            }
        }
    }
    catch (std::runtime_error error)
    {
        GFXRECON_WRITE_CONSOLE("Replay has encountered a fatal error and cannot continue: %s", error.what());
        return_code = -1;
    }
    catch (...)
    {
        GFXRECON_WRITE_CONSOLE("Replay failed due to an unhandled exception");
        return_code = -1;
    }

    gfxrecon::util::Log::Release();

    return return_code;
}
