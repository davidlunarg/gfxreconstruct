/*
** Copyright (c) 2019-2020 Valve Corporation
** Copyright (c) 2019-2023 LunarG, Inc.
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

#ifndef GFXRECON_DECODE_VULKAN_REPLAY_OPTIONS_H
#define GFXRECON_DECODE_VULKAN_REPLAY_OPTIONS_H

#include "decode/replay_options.h"

#include "decode/vulkan_resource_allocator.h"
#include "util/defines.h"

#include <functional>
#include <string>
#include <vector>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

typedef std::function<VulkanResourceAllocator*()> CreateResourceAllocator;

// Default log level to use prior to loading settings.
const util::Log::Severity kDefaultLogLevel = util::Log::Severity::kInfoSeverity;

// Indices to --dump-resources args stored in dump_resources_params array below -- NEEDED??
const uint32_t kdr_BeginCommandBufferIndex = 0;
const uint32_t kdr_DrawIndex = 1;
const uint32_t kdr_QueueSubmintIndex = 2;


// Sascha's Compute ray tracing
// static constexpr uint64_t g_BeginCommandBuffer_Index = 185;
// static constexpr uint64_t g_CmdDraw_Index            = 0;
// static constexpr uint64_t g_CmdDispatch_Index        = 189;
// static constexpr uint64_t g_CmdTraceRaysKHR_Index    = 0;
// static constexpr uint64_t g_QueueSubmit_Index        = 1942;

// Modified vkCube
// static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 107 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = { { 113, 114, 115, 116, 117 } };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_Index        = { { 0 } };
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_Index    = { { 0 } };
// static const std::vector<uint64_t>              g_QueueSubmit_Index        = { 579 };

// Sponza
// static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 1546 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = {
//     { 1556, 1559, 1562, 1565, 1568, 1571, 1574, 1577, 1580, 1584, 1588, 1592, 1595,
//       1599, 1603, 1606, 1610, 1613, 1617, 1620, 1624, 1628, 1632, 1636, 1640 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_Index     = { { 0 } };
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_Index = { { 0 } };
// static const std::vector<uint64_t>              g_QueueSubmit_Index     = { 10143 };

// oit
// static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 307 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = {
//     { 319, 321, 323, 325, 327, 329, 331, 333, 335, 337, 339, 341, 343, 345, 347, 349, 351, 353, 355, 357, 359, 361,
//       363, 365, 367, 369, 371, 373, 375, 377, 379, 381, 383, 385, 387, 389, 391, 393, 395, 397, 399, 401, 403, 405,
//       407, 409, 411, 413, 415, 417, 419, 421, 423, 425, 427, 429, 431, 433, 435, 437, 439, 441, 443, 445, 447, 449,
//       451, 453, 455, 457, 459, 461, 463, 465, 467, 469, 471, 473, 475, 477, 479, 481, 483, 485, 487, 489, 491, 493,
//       495, 497, 499, 501, 503, 505, 507, 509, 511, 513, 515, 517, 519, 521, 523, 525, 527, 529, 531, 533, 535, 537,
//       539, 541, 543, 545, 547, 549, 551, 553, 555, 557, 559, 561, 563, 565, 567, 571, 573, 580 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_Index     = { { 0 } };
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_Index = { { 0 } };
// static const std::vector<uint64_t>              g_QueueSubmit_Index     = { 13353 };

// ssao
// static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 1792 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = {
//     { 1801, 1803, 1805, 1807, 1809, 1811, 1813, 1815, 1817, 1819, 1821, 1823, 1825, 1827,
//       1829, 1831, 1833, 1835, 1837, 1839, 1841, 1843, 1845, 1847, 1849, 1856, 1863, 1870 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_Index     = { { 0 } };
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_Index = { { 0 } };
// static const std::vector<uint64_t>              g_QueueSubmit_Index     = { 6527 };

// inputattachments
// static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 960 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = {
//     { 969,  970,  971,  972,  973,  974,  975,  976,  977,  978,  979,  980,  981,  982,  983,  984,  985,  986,
//       987,  988,  989,  990,  991,  992,  993,  994,  995,  996,  997,  998,  999,  1000, 1001, 1002, 1003, 1004,
//       1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022,
//       1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040,
//       1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1060 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_Index     = { { 0 } };
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_Index = { { 0 } };
// static const std::vector<uint64_t>              g_QueueSubmit_Index     = { 26292 };

// indirectdraw
static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 560 };
static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = { { 568, 572, 577 } };
static const std::vector<std::vector<uint64_t>> g_CmdDispatch_Index        = { { 0 } };
static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_Index    = { { 0 } };
static const std::vector<uint64_t>              g_QueueSubmit_Index        = { 1198 };

static constexpr bool g_isolate_draw = false;

// Structure/vector that holds dump resources command line args.
// TODO: Delete this struct? It might be used only as temp variable holding intermediate results.
struct ReplayOptionsTripletStruct {
    uint64_t opt_BeginCommandBuffer_Index;
    uint64_t opt_CmdDraw_Index;
    uint64_t opt_QueueSubmit_Index;
};

struct VulkanReplayOptions : public ReplayOptions
{
    bool                         enable_vulkan{ true };
    bool                         skip_failed_allocations{ false };
    bool                         omit_pipeline_cache_data{ false };
    bool                         remove_unsupported_features{ false };
    bool                         dumping_resource{ true };
    util::SwapchainOption        swapchain_option{ util::SwapchainOption::kVirtual };
    int32_t                      override_gpu_group_index{ -1 };
    int32_t                      surface_index{ -1 };
    CreateResourceAllocator      create_resource_allocator;
    util::ScreenshotFormat       screenshot_format{ util::ScreenshotFormat::kBmp };
    std::vector<ScreenshotRange> screenshot_ranges;
    std::string                  screenshot_dir;
    std::string                  screenshot_file_prefix{ kDefaultScreenshotFilePrefix };
    uint32_t                     screenshot_width, screenshot_height;
    float                        screenshot_scale;
    std::string                  replace_dir;

    std::vector<struct ReplayOptionsTripletStruct> OrigReplayOptions;

    std::vector<uint64_t>              BeginCommandBuffer_Index;
    std::vector<std::vector<uint64_t>> CmdDraw_Index;
    std::vector<std::vector<uint64_t>> CmdDispatch_Index;
    std::vector<std::vector<uint64_t>> CmdTraceRaysKHR_Index;
    std::vector<uint64_t>              QueueSubmit_indices;
    bool                               isolate_draw{ g_isolate_draw };
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_DECODE_VULKAN_REPLAY_OPTIONS_H
