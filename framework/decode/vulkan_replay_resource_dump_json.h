/*
** Copyright (c) 2023 LunarG, Inc.
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

#ifndef GFXRECON_VULKAN_REPLAY_DUMP_RESOURCE_DUMP_H
#define GFXRECON_VULKAN_REPLAY_DUMP_RESOURCE_DUMP_H

#include "util/file_output_stream.h"
#include "decode/json_writer.h"
#include "../build/project_version.h"  // TODO: Fix this in CMakeFile?

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

class VulkanReplayResourceDumpJson
{
  public:
    VulkanReplayResourceDumpJson() { };

    //@@@@ TODO: Move this to constructor, delete this method
    void VulkanReplayResourceDumpJsonOpen(const std::string &infile)
    {
        std::string outfile;
        int i = infile.size();
        int         i2 = infile.compare(infile.size() - 4, 5, ".gfxr");
        //infile_ = infile;
        if (infile.size() >= 5 && infile.compare(infile.size() - 4, 5, ".gfxr"))
        {
            outfile = infile.substr(0, infile.size() - 5);
        }
        outfile = outfile + "_dr.json";     // DO INFILE and OUTFILE NEED TO BE SAVED???

        gfxrecon::util::platform::FileOpen(&jsonFileHandle_, outfile.c_str(), "w");
        assert(jsonFileHandle_);    // TODO: Generate an error if FileOpen fails
        out_stream_ = new gfxrecon::util::FileNoLockOutputStream(jsonFileHandle_, false);
        gfxrecon::util::JsonOptions json_options;
        json_options.root_dir     = "."; // This field is not used
        json_options.data_sub_dir = "."; // This field is not used
        json_options.format       = gfxrecon::util::JsonFormat::JSON;

        json_writer_ = new gfxrecon::decode::JsonWriter(json_options, GFXRECON_PROJECT_VERSION_STRING, infile);

        json_writer_->GetHeaderJson()["vulkan-version"] =
            std::to_string(VK_VERSION_MAJOR(VK_HEADER_VERSION_COMPLETE)) + "." +
            std::to_string(VK_VERSION_MINOR(VK_HEADER_VERSION_COMPLETE)) + "." +
            std::to_string(VK_VERSION_PATCH(VK_HEADER_VERSION_COMPLETE));
        json_writer_->StartStream(out_stream_);
        dump_ = new nlohmann::ordered_json();
    }

    void VulkanReplayResourceDumpJsonBlockStart() {
        json_data_ = &json_writer_->WriteBlockStart();
    }

    void VulkanReplayResourceDumpJsonBlockEnd()
    {
        static uint32_t n=0;
        (*json_data_)["resourceDump_" + std::to_string(n++)] = *dump_;
        json_writer_->WriteBlockEnd();
    }

    void VulkanReplayResourceDumpJsonData(std::string descriptor, std::string value) {
        (*dump_)[descriptor] = value;
    }

    void VulkanReplayResourceDumpJsonData(std::string descriptor, uint64_t value) {
        (*dump_)[descriptor] = value;
    }


    //@@@@ TODO: Move this to destructor, delete this method. Or maybe not... note that
    //@@@@ this is not being called from dump_base destructor, need to figure out where to call this from
    void VulkanReplayResourceDumpJsonClose()
    {
        if (json_writer_)
        {
            json_writer_->EndStream();
            gfxrecon::util::platform::FileClose(jsonFileHandle_);

            //@@@ TODO: Not sure if this is the best way to release these. Should I be using new/delete??
            delete out_stream_;
            delete json_writer_;
            delete dump_;
        }
    }

    ~VulkanReplayResourceDumpJson() { };


  private:
    FILE*                                   jsonFileHandle_{ NULL };
    gfxrecon::util::FileNoLockOutputStream* out_stream_{ NULL };
    gfxrecon::decode::JsonWriter*           json_writer_;
    nlohmann::ordered_json*                 json_data_{ NULL };
    nlohmann::ordered_json*                 dump_{ NULL };
};

GFXRECON_END_NAMESPACE(gfxrecon)
GFXRECON_END_NAMESPACE(decode)

#endif /* GFXRECON_VULKAN_REPLAY_DUMP_RESOURCE_DUMP_H */
