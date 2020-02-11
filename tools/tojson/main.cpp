/*
** Copyright (c) 2019-2020 Valve Corporation
** Copyright (c) 2019-2020 LunarG, Inc.
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

#include "project_version.h"

#include "decode/file_processor.h"
#include "format/format.h"
#include "generated/generated_vulkan_json_consumer.h"
#include "generated/generated_vulkan_decoder.h"
#include "util/argument_parser.h"
#include "util/logging.h"

#include "vulkan/vulkan_core.h"

const char kAllOptions[] = "--version,--noaddr,--showshader";
const char kAllArguments[] = "--outfile,--indent";
const char kVersionOption[] = "--version";
const char kNoAddrOption[] = "--noaddr";
const char kShowShaderOption[] = "--showshader";
const char kOutfileArgument[]  = "--outfile";
const char kIndentArgument[]   = "--indent";

const int kDefaultIndentSize = 4;

int kIndentSize = kDefaultIndentSize;  // Number of spaces to use for each indentation.
bool kNoAddr = false;                  // When true, do no print addresses but print "address" instead.
bool kPrintShaderCode = false;         // When true, print shader code.

static bool PrintVersion(const char* exe_name, const gfxrecon::util::ArgumentParser& arg_parser)
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
        GFXRECON_WRITE_CONSOLE("  Vulkan Header Version 1.1.%u", VK_HEADER_VERSION);

        return true;
    }

    return false;
}

void PrintUsage(const char* exe_name)
{
    std::string app_name     = exe_name;
    size_t      dir_location = app_name.find_last_of("/\\");
    if (dir_location >= 0)
    {
        app_name.replace(0, dir_location + 1, "");
    }
    GFXRECON_WRITE_CONSOLE("\n%s - A tool to convert GFXReconstruct capture files to json.\n", app_name.c_str());
    GFXRECON_WRITE_CONSOLE("Usage:");
    GFXRECON_WRITE_CONSOLE("  %s [--outfile <file> ] [--indent <N> ] [--noaddr] [--showshader] [--version] <file>\n", app_name.c_str());
    GFXRECON_WRITE_CONSOLE("Required arguments:");
    GFXRECON_WRITE_CONSOLE("  <file>\t\tPath to the GFXReconstruct capture file to be converted");
    GFXRECON_WRITE_CONSOLE("        \t\tto json.");
    GFXRECON_WRITE_CONSOLE("\nOptional arguments:");
    GFXRECON_WRITE_CONSOLE("  --outfile <file>\tSet the output file name");
    GFXRECON_WRITE_CONSOLE("  --indent <N>\t\tSet the indent size for writing parameters and values");
    GFXRECON_WRITE_CONSOLE("  --noaddr\t\tGenerate output without handles/addresses, use \"address\" instead");
    GFXRECON_WRITE_CONSOLE("  --showshader\t\tOutput the contents of shader files loaded");
    GFXRECON_WRITE_CONSOLE("  --version\t\tPrint version information and exit");
}

int main(int argc, const char** argv)
{
    std::string                     input_filename;
    gfxrecon::decode::FileProcessor file_processor;
    gfxrecon::util::ArgumentParser  arg_parser(argc, argv, kAllOptions, kAllArguments);
    std::string argValue;
    std::string output_filename;

    gfxrecon::util::Log::Init();

    if (PrintVersion(argv[0], arg_parser))
    {
        exit(0);
    }

    if (arg_parser.IsInvalid())
    {
        PrintUsage(argv[0]);
        gfxrecon::util::Log::Release();
        exit(-1);
    }
    else
    {
        const std::vector<std::string>& positional_arguments = arg_parser.GetPositionalArguments();
        input_filename                                       = positional_arguments[0];
    }

    kNoAddr = arg_parser.IsOptionSet(kNoAddrOption);

    kPrintShaderCode = arg_parser.IsOptionSet(kShowShaderOption);

    argValue = arg_parser.GetArgumentValue(kIndentArgument);
    if (!argValue.empty())
    {
        kIndentSize = std::stoi(argValue);
        if (kIndentSize < 0)
            kIndentSize = kDefaultIndentSize;
    }

    output_filename = arg_parser.GetArgumentValue(kOutfileArgument);
    if (output_filename.empty())
    {
        output_filename = input_filename;
        size_t      suffix_pos      = output_filename.find(GFXRECON_FILE_EXTENSION);
        if (suffix_pos != std::string::npos)
        {
            output_filename = output_filename.substr(0, suffix_pos);
        }
        output_filename += ".txt";
    }

    if (file_processor.Initialize(input_filename))
    {
        gfxrecon::decode::VulkanDecoder       decoder;
        gfxrecon::decode::VulkanJsonConsumer json_consumer;

        json_consumer.Initialize(output_filename);
        decoder.AddConsumer(&json_consumer);

        file_processor.AddDecoder(&decoder);
        file_processor.ProcessAllFrames();
    }

    gfxrecon::util::Log::Release();
    return 0;
}
