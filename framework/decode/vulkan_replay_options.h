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

static constexpr bool g_isolate_draw = false;

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
static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 107 };
static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = {
    { 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124 }
};
static const std::vector<std::vector<uint64_t>>              g_CmdDispatch_Index     = { { 0 } };
static const std::vector<std::vector<uint64_t>>              g_CmdTraceRaysKHR_Index = { { 0 } };
static const std::vector<uint64_t>                           g_QueueSubmit_Index     = { 579 };
static const std::vector<std::vector<std::vector<uint64_t>>> g_RenderPassIndices     = { { { 108, 125 } } };
static const bool                                            g_dump_rts_before_dc    = true;

// =============================================

// Sponza
// static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 1546 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = {
//     { 1556, 1559, 1562, 1565, 1568, 1571, 1574, 1577, 1580, 1584, 1588, 1592, 1595,
//       1599, 1603, 1606, 1610, 1613, 1617, 1620, 1624, 1628, 1632, 1636, 1640 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_Index     = { { 0 } };
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_Index = { { 0 } };
// static const std::vector<uint64_t>              g_QueueSubmit_Index     = { 10143 };

// =============================================

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

// =============================================

// ssao
// static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 1792 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = {
//     { 1801, 1803, 1805, 1807, 1809, 1811, 1813, 1815, 1817, 1819, 1821, 1823, 1825, 1827,
//       1829, 1831, 1833, 1835, 1837, 1839, 1841, 1843, 1845, 1847, 1849, 1856, 1863, 1870 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_Index     = { { 0 } };
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_Index = { { 0 } };
// static const std::vector<uint64_t>              g_QueueSubmit_Index     = { 6527 };
// static const std::vector<std::vector<uint64_t>> g_RenderPassIndices     = {
//     { 1793, 1850 }, { 1851, 1857 }, { 1858, 1864 }, { 1865, 1871 }
// };

// =============================================

// pixel6 ssao
// static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 34929 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = {
//     { 34938, 34940, 34942, 34944, 34946, 34948, 34950, 34952, 34954, 34956, 34958, 34960, 34962, 34964,
//       34966, 34968, 34970, 34972, 34974, 34976, 34978, 34980, 34982, 34984, 34986, 34993, 35000, 35007 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_Index     = { { 0 } };
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_Index = { { 0 } };
// static const std::vector<uint64_t>              g_QueueSubmit_Index     = { 35276 };

// =============================================

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

// =============================================

// indirectdraw
// static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 560 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = { { 568, 572, 577 } };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_Index        = { { 0 } };
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_Index    = { { 0 } };
// static const std::vector<uint64_t>              g_QueueSubmit_Index        = { 1198 };

// =============================================

// subpasses
// static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 1218 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = {
//     { 1227, 1228, 1229, 1230, 1231, 1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243,
//       1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260,
//       1261, 1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277,
//       1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294,
//       1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311,
//       1312, 1313, 1319, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_Index     = { { 0 } };
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_Index = { { 0 } };
// static const std::vector<uint64_t>              g_QueueSubmit_Index     = { 2029 };
// static const std::vector<std::vector<uint64_t>> g_RenderPassIndices     = { { 1219, 1316, 1322, 1343 } };

// =============================================

// subpasses pixel 6
// static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 36150 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = {
//     { 36158, 36159, 36160, 36161, 36162, 36163, 36164, 36165, 36166, 36167, 36168, 36169, 36170, 36171, 36172,
//       36173, 36174, 36175, 36176, 36177, 36178, 36179, 36180, 36181, 36182, 36183, 36184, 36185, 36186, 36187,
//       36188, 36189, 36190, 36191, 36192, 36193, 36194, 36195, 36196, 36197, 36198, 36199, 36200, 36201, 36202,
//       36203, 36204, 36205, 36206, 36207, 36208, 36209, 36210, 36211, 36212, 36213, 36214, 36215, 36216, 36217,
//       36218, 36219, 36220, 36221, 36222, 36223, 36224, 36225, 36226, 36227, 36228, 36229, 36230, 36231, 36232,
//       36233, 36234, 36235, 36236, 36237, 36238, 36239, 36240, 36241, 36242, 36243, 36244, 36248, 36254, 36255,
//       36256, 36257, 36258, 36259, 36260, 36261, 36262, 36263, 36264, 36265, 36266 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_Index     = { { 0 } };
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_Index = { { 0 } };
// static const std::vector<uint64_t>              g_QueueSubmit_Index     = { 36649 };
// static const std::vector<std::vector<uint64_t>> g_RenderPassIndices     = { { 36151, 36245, 36249, 36267 } };

// =============================================

// fortnite.skydive2_v2.0
// static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 6641995 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = {
//     { 6642022, 6642028, 6642033, 6642038, 6642043, 6642049, 6642054, 6642057, 6642060, 6642063, 6642066, 6642069,
//       6642072, 6642075, 6642078, 6642081, 6642084, 6642087, 6642090, 6642093, 6642096, 6642099, 6642102, 6642105,
//       6642108, 6642111, 6642115, 6642118, 6642121, 6642124, 6642127, 6642130, 6642133, 6642136, 6642139, 6642142,
//       6642145, 6642148, 6642151, 6642154, 6642157, 6642160, 6642163, 6642166, 6642169, 6642172, 6642175, 6642184,
//       6642189, 6642196, 6642201, 6642204, 6642210, 6642216, 6642219, 6642223, 6642228, 6642234, 6642240, 6642246,
//       6642250, 6642254, 6642259, 6642262, 6642265, 6642268, 6642271, 6642277, 6642283, 6642289, 6642295, 6642298,
//       6642304, 6642308, 6642315, 6642321, 6642326, 6642329, 6642333, 6642338, 6642341, 6642344, 6642349, 6642352,
//       6642355, 6642359, 6642362, 6642365, 6642370, 6642373, 6642377, 6642380, 6642383, 6642386, 6642389, 6642392,
//       6642395, 6642398, 6642401, 6642404, 6642407, 6642410, 6642413, 6642416, 6642422, 6642427, 6642432, 6642435,
//       6642440, 6642443, 6642446, 6642449, 6642452, 6642455, 6642458, 6642464, 6642469, 6642474, 6642478, 6642483,
//       6642486, 6642489, 6642492, 6642495, 6642498, 6642501, 6642505, 6642510, 6642515, 6642520, 6642523, 6642527,
//       6642530, 6642533, 6642536, 6642541, 6642544, 6642549, 6642552, 6642557, 6642560, 6642563, 6642566, 6642571,
//       6642575, 6642581, 6642586, 6642592, 6642595, 6642598, 6642601, 6642607, 6642612, 6642618, 6642621, 6642624,
//       6642629, 6642635, 6642641, 6642646, 6642649, 6642652, 6642657, 6642662, 6642665, 6642670, 6642673, 6642676,
//       6642679, 6642682, 6642685, 6642688, 6642693, 6642696, 6642699, 6642702, 6642705, 6642708, 6642711, 6642714,
//       6642717, 6642720, 6642723, 6642726, 6642733, 6642738, 6642743, 6642749, 6642755, 6642758, 6642762, 6642765,
//       6642772, 6642777, 6642781, 6642784, 6642787, 6642790, 6642793, 6642796, 6642799, 6642802, 6642807, 6642810,
//       6642815, 6642818, 6642822, 6642825, 6642830, 6642835, 6642840, 6642843, 6642847, 6642853, 6642857, 6642860,
//       6642863, 6642868, 6642871, 6642874, 6642879, 6642882, 6642886, 6642890, 6642894, 6642897, 6642900, 6642905,
//       6642909, 6642915, 6642918, 6642922, 6642926, 6642931, 6642935, 6642938, 6642947, 6642954, 6642962, 6642965,
//       6642969, 6642976, 6642981, 6642984, 6642987, 6642991, 6642999, 6643003, 6643006, 6643009, 6643012, 6643015,
//       6643018, 6643021, 6643024, 6643027, 6643030, 6643033, 6643036, 6643043, 6643049, 6643055, 6643060, 6643063,
//       6643066, 6643069, 6643072, 6643075, 6643078, 6643081, 6643084, 6643087, 6643090, 6643093, 6643096, 6643099,
//       6643102, 6643107, 6643110, 6643115, 6643122, 6643125, 6643130, 6643133, 6643136, 6643139, 6643142, 6643145,
//       6643148, 6643151, 6643155, 6643158, 6643161, 6643164, 6643167, 6643170, 6643175, 6643180, 6643184, 6643187,
//       6643194, 6643199, 6643204, 6643211, 6643216, 6643219, 6643222, 6643225, 6643228, 6643231, 6643234, 6643239,
//       6643242, 6643245, 6643248, 6643251, 6643254, 6643257, 6643260, 6643264, 6643268, 6643273, 6643277, 6643280,
//       6643285, 6643288, 6643292, 6643295, 6643300, 6643303, 6643308, 6643313, 6643317, 6643321, 6643325, 6643329,
//       6643333, 6643337, 6643341, 6643345, 6643349, 6643354, 6643358, 6643362, 6643367, 6643371, 6643376, 6643381,
//       6643388, 6643393, 6643398, 6643403, 6643410, 6643415, 6643420, 6643425, 6643430, 6643435, 6643440, 6643445,
//       6643450, 6643455, 6643460, 6643465, 6643470, 6643475, 6643480, 6643485, 6643490, 6643495, 6643500, 6643505,
//       6643512, 6643517, 6643522, 6643527, 6643532, 6643537, 6643542, 6643547, 6643552, 6643557, 6643563, 6643568,
//       6643573, 6643578, 6643583, 6643588, 6643593, 6643598, 6643605, 6643610, 6643617, 6643622, 6643627, 6643632,
//       6643637, 6643642, 6643649, 6643654, 6643659, 6643663, 6643667, 6643671, 6643675, 6643679, 6643683, 6643687,
//       6643691, 6643695, 6643699, 6643703, 6643707, 6643711, 6643715, 6643719, 6643723, 6643727, 6643731, 6643735,
//       6643739, 6643743, 6643747, 6643751, 6643755, 6643759, 6643763, 6643767, 6643771, 6643775, 6643779, 6643783,
//       6643787, 6643791, 6643796, 6643800, 6643804, 6643808, 6643812, 6643816, 6643820, 6643824, 6643828, 6643832,
//       6643836, 6643840, 6643844, 6643848, 6643852, 6643856, 6643860, 6643864, 6643868, 6643872, 6643876, 6643880,
//       6643884, 6643888, 6643892, 6643896, 6643900, 6643904, 6643908, 6643912, 6643916, 6643921, 6643926, 6643930,
//       6643934, 6643938, 6643943, 6643946, 6643949, 6643952, 6643955, 6643959, 6643962, 6643965, 6643970, 6643973,
//       6643976, 6643979, 6643983, 6643986, 6643989, 6643992, 6643995, 6643998, 6644003, 6644006, 6644009, 6644016,
//       6644021, 6644026, 6644029, 6644032, 6644037, 6644040, 6644043, 6644046, 6644049, 6644052, 6644055, 6644058,
//       6644061, 6644064, 6644067, 6644070, 6644077, 6644080, 6644083, 6644086, 6644089, 6644092, 6644095, 6644098,
//       6644101, 6644104, 6644107, 6644110, 6644114, 6644119, 6644122, 6644125, 6644129, 6644134, 6644137, 6644140,
//       6644143, 6644146, 6644149, 6644152, 6644155, 6644158, 6644161, 6644164, 6644167, 6644170, 6644173, 6644176,
//       6644183, 6644186, 6644193, 6644199, 6644204, 6644208, 6644212, 6644216, 6644220, 6644224, 6644228, 6644232,
//       6644236, 6644240, 6644244, 6644248, 6644252, 6644256, 6644260, 6644264, 6644268, 6644272, 6644276, 6644280,
//       6644284, 6644288, 6644292, 6644296, 6644300, 6644304, 6644308, 6644312, 6644316, 6644320, 6644324, 6644328,
//       6644332, 6644336, 6644340, 6644344, 6644348, 6644352, 6644356, 6644360, 6644364, 6644368, 6644372, 6644376,
//       6644380, 6644384, 6644388, 6644392, 6644396, 6644400, 6644404, 6644408, 6644412, 6644416, 6644420, 6644424,
//       6644428, 6644432, 6644436, 6644440, 6644444, 6644448, 6644452, 6644456, 6644460, 6644464, 6644468, 6644472,
//       6644476, 6644480, 6644484, 6644488, 6644492, 6644496, 6644500, 6644504, 6644508, 6644512, 6644516, 6644520,
//       6644524, 6644528, 6644532, 6644536, 6644540, 6644544, 6644548, 6644552, 6644556, 6644560, 6644564, 6644568,
//       6644572, 6644576, 6644580, 6644584, 6644588, 6644592, 6644596, 6644600, 6644604, 6644608, 6644612, 6644616,
//       6644620, 6644624, 6644628, 6644632, 6644636, 6644640, 6644644, 6644648, 6644652, 6644656, 6644660, 6644664,
//       6644668, 6644672, 6644676, 6644680, 6644684, 6644688, 6644692, 6644696, 6644700, 6644704, 6644708, 6644712,
//       6644716, 6644720, 6644724, 6644728, 6644732, 6644736, 6644740, 6644744, 6644748, 6644752, 6644756, 6644760,
//       6644764, 6644768, 6644772, 6644776, 6644780, 6644784, 6644788, 6644792, 6644796, 6644800, 6644804, 6644808,
//       6644812, 6644816, 6644820, 6644824, 6644828, 6644832, 6644836, 6644840, 6644844, 6644848, 6644852, 6644856,
//       6644860, 6644864, 6644868, 6644872, 6644876, 6644880, 6644884, 6644888, 6644892, 6644896, 6644900, 6644904,
//       6644908, 6644912, 6644916, 6644920, 6644926, 6644934, 6644940, 6644945, 6644949, 6644952, 6644955, 6644958,
//       6644961, 6644965, 6644968, 6644971, 6644975, 6644980, 6644984, 6644988, 6644992, 6644997, 6645001, 6645005,
//       6645009, 6645014, 6645018, 6645022, 6645027, 6645031, 6645036, 6645041, 6645045, 6645050, 6645054, 6645059,
//       6645064, 6645069, 6645073, 6645076, 6645079, 6645082, 6645085, 6645089, 6645092, 6645095, 6645099, 6645104,
//       6645112, 6645120, 6645128, 6645136, 6645144, 6645152, 6645160, 6645168, 6645176, 6645184, 6645190, 6645198,
//       6645203, 6645209, 6645215, 6645221, 6645227, 6645233, 6645239, 6645245, 6645251, 6645257, 6645263, 6645269,
//       6645275, 6645281, 6645287, 6645293, 6645299, 6645305, 6645311, 6645317, 6645323, 6645329, 6645335, 6645341,
//       6645347, 6645353, 6645359, 6645365, 6645371, 6645377, 6645383, 6645389, 6645395, 6645401, 6645407, 6645413,
//       6645419, 6645425, 6645431, 6645437, 6645443, 6645449, 6645455, 6645461, 6645467, 6645473, 6645479, 6645485,
//       6645491, 6645497, 6645503, 6645509, 6645515, 6645521, 6645527, 6645533, 6645539, 6645545, 6645551, 6645557,
//       6645563, 6645569, 6645575, 6645581, 6645587, 6645593, 6645599, 6645605, 6645611, 6645617, 6645623, 6645629,
//       6645635, 6645641, 6645647, 6645653, 6645659, 6645665, 6645671, 6645677, 6645683, 6645689, 6645695, 6645701,
//       6645707, 6645713, 6645719, 6645725, 6645731, 6645737, 6645743, 6645749, 6645755, 6645761, 6645767, 6645773,
//       6645779, 6645785, 6645791, 6645797, 6645803, 6645809, 6645815, 6645821, 6645827, 6645833, 6645839, 6645845,
//       6645851, 6645857, 6645863, 6645869, 6645875, 6645881, 6645887, 6645893, 6645899, 6645905, 6645911, 6645917,
//       6645923, 6645929, 6645935, 6645941, 6645947, 6645953, 6645959, 6645965, 6645971, 6645977, 6645983, 6645989,
//       6645995, 6646001, 6646007, 6646013, 6646019, 6646025, 6646031, 6646037, 6646043, 6646049, 6646055, 6646061,
//       6646067, 6646073, 6646079, 6646085, 6646091, 6646097, 6646103, 6646109, 6646115, 6646121, 6646127, 6646133,
//       6646139, 6646145, 6646151, 6646157, 6646163, 6646169, 6646175, 6646181, 6646187, 6646193, 6646199, 6646205,
//       6646211, 6646217, 6646223, 6646229, 6646235, 6646241, 6646247, 6646253, 6646259, 6646265, 6646271, 6646277,
//       6646283, 6646289, 6646295, 6646301, 6646307, 6646313, 6646319, 6646325, 6646331, 6646337, 6646343, 6646349,
//       6646355, 6646361, 6646367, 6646373, 6646379, 6646385, 6646391, 6646397, 6646403, 6646409, 6646415, 6646421,
//       6646427, 6646433, 6646439, 6646445, 6646451, 6646457, 6646463, 6646469, 6646475, 6646481, 6646487, 6646493,
//       6646499, 6646505, 6646511, 6646517, 6646523, 6646529, 6646535, 6646541, 6646547, 6646553, 6646559, 6646565,
//       6646571, 6646577, 6646583, 6646589, 6646595, 6646601, 6646607, 6646613, 6646619, 6646625, 6646631, 6646637,
//       6646643, 6646649, 6646655, 6646661, 6646667, 6646673, 6646679, 6646685, 6646691, 6646697, 6646703, 6646709,
//       6646715, 6646721, 6646727, 6646733, 6646739, 6646745, 6646751, 6646757, 6646763, 6646769, 6646775, 6646781,
//       6646787, 6646793, 6646799, 6646805, 6646811, 6646817, 6646823, 6646829, 6646835, 6646841, 6646847, 6646853,
//       6646859, 6646865, 6646871, 6646877, 6646883, 6646889 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_Index     = { { 0 } };
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_Index = { { 0 } };
// static const std::vector<uint64_t>              g_QueueSubmit_Index     = { 6646900 };

// =============================================

// Gfxbench: temple run pixel 6
// static const std::vector<uint64_t>              g_BeginCommandBuffer_Index = { 2895453, 2897288 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_Index            = {
//     { 2895462, 2895466, 2895470, 2895474, 2895478, 2895482, 2895486, 2895490, 2895494, 2895498, 2895502, 2895506,
//       2895510, 2895514, 2895518, 2895522, 2895526, 2895530, 2895534, 2895538, 2895542, 2895546, 2895550, 2895554,
//       2895558, 2895562, 2895566, 2895570, 2895575, 2895580, 2895584, 2895589, 2895594, 2895599, 2895604, 2895608,
//       2895612, 2895616, 2895620, 2895624, 2895628, 2895632, 2895636, 2895640, 2895644, 2895648, 2895652, 2895656,
//       2895660, 2895664, 2895668, 2895672, 2895676, 2895680, 2895684, 2895688, 2895692, 2895696, 2895700, 2895704,
//       2895708, 2895712, 2895716, 2895720, 2895724, 2895728, 2895732, 2895736, 2895740, 2895744, 2895748, 2895752,
//       2895756, 2895760, 2895764, 2895768, 2895772, 2895776, 2895780, 2895784, 2895788, 2895792, 2895796, 2895800,
//       2895804, 2895808, 2895812, 2895816, 2895820, 2895824, 2895828, 2895832, 2895836, 2895840, 2895844, 2895848,
//       2895852, 2895856, 2895860, 2895864, 2895868, 2895872, 2895876, 2895880, 2895884, 2895888, 2895892, 2895896,
//       2895900, 2895904, 2895908, 2895912, 2895916, 2895920, 2895924, 2895928, 2895932, 2895936, 2895940, 2895944,
//       2895948, 2895952, 2895956, 2895960, 2895964, 2895968, 2895972, 2895976, 2895980, 2895984, 2895988, 2895992,
//       2895996, 2896000, 2896004, 2896008, 2896012, 2896016, 2896020, 2896024, 2896028, 2896032, 2896036, 2896040,
//       2896044, 2896048, 2896052, 2896056, 2896060, 2896064, 2896068, 2896072, 2896076, 2896080, 2896084, 2896088,
//       2896092, 2896096, 2896100, 2896104, 2896108, 2896112, 2896116, 2896120, 2896124, 2896128, 2896132, 2896136,
//       2896140, 2896144, 2896148, 2896152, 2896156, 2896160, 2896164, 2896168, 2896172, 2896176, 2896180, 2896184,
//       2896188, 2896192, 2896196, 2896200, 2896204, 2896208, 2896212, 2896216, 2896220, 2896224, 2896228, 2896232,
//       2896236, 2896240, 2896244, 2896248, 2896252, 2896256, 2896260, 2896264, 2896268, 2896272, 2896276, 2896280,
//       2896284, 2896288, 2896292, 2896296, 2896300, 2896304, 2896308, 2896312, 2896316, 2896320, 2896324, 2896328,
//       2896332, 2896336, 2896340, 2896344, 2896348, 2896356, 2896363, 2896370, 2896377, 2896384, 2896391, 2896398,
//       2896405, 2896412, 2896419, 2896426, 2896433, 2896440, 2896447, 2896454, 2896461, 2896468, 2896475, 2896485,
//       2896489, 2896493, 2896497, 2896501, 2896505, 2896509, 2896513, 2896517, 2896521, 2896525, 2896529, 2896533,
//       2896537, 2896544, 2896549, 2896554, 2896559, 2896564, 2896569, 2896574, 2896579, 2896583, 2896587, 2896591,
//       2896595, 2896599, 2896603, 2896607, 2896611, 2896615, 2896619, 2896623, 2896631, 2896638, 2896645, 2896652,
//       2896659, 2896666, 2896673, 2896680, 2896687, 2896694, 2896699, 2896707, 2896717, 2896721, 2896725, 2896729,
//       2896733, 2896737, 2896741, 2896745, 2896749, 2896753, 2896757, 2896761, 2896765, 2896769, 2896773, 2896777,
//       2896781, 2896785, 2896789, 2896793, 2896797, 2896801, 2896805, 2896809, 2896813, 2896817, 2896821, 2896825,
//       2896829, 2896833, 2896837, 2896841, 2896845, 2896849, 2896853, 2896857, 2896861, 2896865, 2896869, 2896873,
//       2896877, 2896881, 2896885, 2896889, 2896893, 2896897, 2896901, 2896905, 2896909, 2896913, 2896917, 2896921,
//       2896925, 2896929, 2896933, 2896937, 2896941, 2896945, 2896949, 2896953, 2896957, 2896961, 2896965, 2896969,
//       2896973, 2896977, 2896981, 2896985, 2896989, 2896993, 2896997, 2897001, 2897005, 2897009, 2897013, 2897017,
//       2897021, 2897025, 2897029, 2897033, 2897037, 2897041, 2897045, 2897049, 2897053, 2897057, 2897061, 2897065,
//       2897069, 2897073, 2897077, 2897081, 2897085, 2897089, 2897093, 2897097, 2897101, 2897105, 2897109, 2897113,
//       2897117, 2897121, 2897129 },

//     { 2897299, 2897305, 2897311, 2897317, 2897323, 2897329, 2897335, 2897341, 2897347, 2897353, 2897359, 2897365,
//       2897371, 2897377, 2897383, 2897389, 2897395, 2897401, 2897407, 2897413, 2897419, 2897425, 2897431, 2897437,
//       2897443, 2897449, 2897456, 2897463, 2897469, 2897475, 2897481, 2897487, 2897493, 2897499, 2897505, 2897511,
//       2897517, 2897523, 2897529, 2897535, 2897541, 2897547, 2897553, 2897559, 2897565, 2897571, 2897577, 2897583,
//       2897589, 2897595, 2897601, 2897607, 2897613, 2897619, 2897625, 2897631, 2897637, 2897643, 2897649, 2897655,
//       2897661, 2897667, 2897673, 2897679, 2897685, 2897691, 2897697, 2897703, 2897709, 2897715, 2897721, 2897727,
//       2897733, 2897739, 2897745, 2897751, 2897757, 2897763, 2897769, 2897775, 2897781, 2897787, 2897793, 2897799,
//       2897805, 2897811, 2897817, 2897823, 2897829, 2897835, 2897841, 2897847, 2897853, 2897859, 2897865, 2897871,
//       2897877, 2897883, 2897889, 2897895, 2897901, 2897907, 2897913, 2897919, 2897925, 2897931, 2897937, 2897943,
//       2897949, 2897955, 2897961, 2897967, 2897973, 2897979, 2897985, 2897991, 2897997, 2898003, 2898009, 2898015,
//       2898021, 2898027, 2898033, 2898039, 2898045, 2898051, 2898057, 2898063, 2898069, 2898075, 2898081, 2898087,
//       2898093, 2898099, 2898105, 2898111, 2898117, 2898123, 2898129, 2898135, 2898141, 2898147, 2898153, 2898159,
//       2898165, 2898171, 2898177, 2898183, 2898189, 2898195, 2898201, 2898207, 2898213, 2898219, 2898225, 2898231,
//       2898237, 2898243, 2898249, 2898255, 2898261, 2898267, 2898273, 2898279, 2898285, 2898291, 2898297, 2898303,
//       2898309, 2898315, 2898321, 2898327, 2898333, 2898339, 2898345, 2898351, 2898357, 2898363, 2898369, 2898375,
//       2898381, 2898389, 2898394, 2898399, 2898404, 2898409, 2898414, 2898419, 2898426, 2898432, 2898438, 2898444,
//       2898450, 2898456, 2898462, 2898468, 2898474, 2898480, 2898486, 2898492, 2898498, 2898504, 2898510, 2898516,
//       2898522, 2898528, 2898534, 2898540, 2898546, 2898552, 2898558, 2898564, 2898570, 2898576, 2898582, 2898588,
//       2898594, 2898600, 2898606, 2898612, 2898618, 2898624, 2898630, 2898636, 2898643, 2898650, 2898656, 2898662,
//       2898668, 2898674, 2898680, 2898686, 2898692, 2898698, 2898704, 2898710, 2898716, 2898722, 2898728, 2898734,
//       2898740, 2898747, 2898754, 2898760, 2898766, 2898772, 2898778, 2898784, 2898790, 2898796, 2898802, 2898808,
//       2898814, 2898820, 2898826, 2898832, 2898838, 2898844, 2898850, 2898856, 2898862, 2898868, 2898874, 2898881,
//       2898888, 2898894, 2898901, 2898908, 2898915, 2898921, 2898928, 2898934, 2898940, 2898946, 2898952, 2898959,
//       2898966, 2898973, 2898980, 2898987, 2898994, 2899001, 2899008, 2899014, 2899020, 2899026, 2899032, 2899038,
//       2899044, 2899050, 2899056, 2899062, 2899068, 2899074, 2899080, 2899086, 2899092, 2899098, 2899104, 2899110,
//       2899116, 2899122, 2899128, 2899134, 2899140, 2899146, 2899153, 2899160, 2899167, 2899174, 2899180, 2899186,
//       2899192, 2899198, 2899204, 2899210, 2899216, 2899222, 2899228, 2899234, 2899240, 2899246, 2899252, 2899258,
//       2899264, 2899271, 2899278, 2899284, 2899290, 2899296, 2899303, 2899310, 2899316, 2899323, 2899330, 2899336,
//       2899342, 2899349, 2899355, 2899362, 2899369, 2899376, 2899383, 2899390, 2899396, 2899402, 2899408, 2899414,
//       2899420, 2899427, 2899434, 2899441, 2899448, 2899455, 2899462, 2899468, 2899474, 2899480, 2899486, 2899492,
//       2899498, 2899504, 2899511, 2899518, 2899524, 2899531, 2899538, 2899545, 2899552, 2899558, 2899564, 2899570,
//       2899576, 2899582, 2899588, 2899594, 2899600, 2899606, 2899612, 2899618, 2899624, 2899631, 2899638, 2899644,
//       2899650, 2899656, 2899662, 2899668, 2899675, 2899682, 2899688, 2899695, 2899702, 2899708, 2899715, 2899721,
//       2899728, 2899734, 2899740, 2899746, 2899753, 2899760, 2899766, 2899772, 2899778, 2899785, 2899792, 2899798,
//       2899805, 2899812, 2899818, 2899824, 2899830, 2899836, 2899842, 2899848, 2899854, 2899860, 2899866, 2899872,
//       2899878, 2899884, 2899890, 2899897, 2899904, 2899911, 2899918, 2899924, 2899930, 2899937, 2899944, 2899950,
//       2899957, 2899964, 2899971, 2899978, 2899984, 2899990, 2899996, 2900002, 2900008, 2900014, 2900020, 2900026,
//       2900032, 2900038, 2900044, 2900050, 2900056, 2900062, 2900068, 2900074, 2900080, 2900086, 2900092, 2900098,
//       2900104, 2900110, 2900116, 2900123, 2900130, 2900137, 2900144, 2900150, 2900156, 2900162, 2900168, 2900174,
//       2900180, 2900187, 2900194, 2900200, 2900207, 2900214, 2900220, 2900227, 2900234, 2900240, 2900247, 2900254,
//       2900260, 2900266, 2900272, 2900278, 2900284, 2900290, 2900296, 2900302, 2900308, 2900314, 2900323, 2900330,
//       2900337, 2900344, 2900351, 2900358, 2900365, 2900372, 2900381, 2900387, 2900396, 2900403, 2900410, 2900417,
//       2900424, 2900431, 2900438, 2900445, 2900452, 2900459, 2900466, 2900473, 2900480, 2900487, 2900494, 2900501,
//       2900508, 2900515, 2900522, 2900529, 2900536, 2900543, 2900550, 2900557, 2900564, 2900571, 2900578, 2900585,
//       2900592, 2900599, 2900606, 2900613, 2900620, 2900627, 2900634, 2900641, 2900648, 2900655, 2900662, 2900669,
//       2900676, 2900683, 2900690, 2900697, 2900704, 2900711, 2900718, 2900725, 2900732, 2900739, 2900746, 2900756,
//       2900763, 2900770, 2900777, 2900784, 2900791, 2900798, 2900805, 2900812, 2900821, 2900828, 2900835, 2900842,
//       2900849, 2900856, 2900863, 2900870, 2900877, 2900884, 2900892, 2900898, 2900904, 2900910, 2900916, 2900925,
//       2900939, 2900952, 2900965, 2900978, 2900991, 2901003, 2901014, 2901025, 2901036, 2901044, 2901053, 2901062,
//       2901085, 2901097, 2901109, 2901121, 2901133, 2901145, 2901156, 2901167, 2901179, 2901191, 2901214, 2901225,
//       2901236, 2901247, 2901263 }
// };
// static const std::vector<std::vector<uint64_t>>              g_CmdDispatch_Index     = { { 0 }, { 0 } };
// static const std::vector<std::vector<uint64_t>>              g_CmdTraceRaysKHR_Index = { { 0 }, { 0 } };
// static const std::vector<uint64_t>                           g_QueueSubmit_Index     = { 2897133, 2901269 };
// static const std::vector<std::vector<std::vector<uint64_t>>> g_RenderPassIndices     = {
//     { { 2895455, 2896476 }, { 2896478, 2896708 }, { 2896710, 2897130 } },
//     { { 2897290, 2900747, 2900878, 2900926 },
//       { 2900928, 2900940 },
//       { 2900942, 2900953 },
//       { 2900955, 2900966 },
//       { 2900968, 2900979 },
//       { 2900981, 2900992 },
//       { 2900994, 2901004 },
//       { 2901006, 2901015 },
//       { 2901017, 2901026 },
//       { 2901028, 2901063 },
//       { 2901076, 2901086 },
//       { 2901088, 2901098 },
//       { 2901100, 2901110 },
//       { 2901112, 2901122 },
//       { 2901124, 2901134 },
//       { 2901136, 2901146 },
//       { 2901147, 2901157 },
//       { 2901158, 2901168 },
//       { 2901170, 2901180 },
//       { 2901182, 2901192 },
//       { 2901205, 2901215 },
//       { 2901217, 2901226 },
//       { 2901228, 2901237 },
//       { 2901239, 2901248 },
//       { 2901254, 2901264 } }
// };

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


    std::vector<struct ReplayOptionsTripletStruct>  OrigReplayOptions;
    std::vector<uint64_t>                           BeginCommandBuffer_Index;
    std::vector<std::vector<uint64_t>>              CmdDraw_Index;
    std::vector<std::vector<std::vector<uint64_t>>> RenderPass_Indices;
    std::vector<std::vector<uint64_t>>              CmdDispatch_Index;
    std::vector<std::vector<uint64_t>>              CmdTraceRaysKHR_Index;
    std::vector<uint64_t>                           QueueSubmit_indices;
    bool                                            dump_rts_before_dc;
    bool                                            isolate_draw;
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_DECODE_VULKAN_REPLAY_OPTIONS_H
