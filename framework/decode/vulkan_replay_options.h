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


enum class SkipGetFenceStatus
{
    NoSkip,
    SkipUnsuccessful,
    SkipAll,
    COUNT
};

// Indices to --dump-resources args stored in dump_resources_params array below -- NEEDED??
const uint32_t kdr_BeginCommandBufferIndex = 0;
const uint32_t kdr_DrawIndex               = 1;
const uint32_t kdr_QueueSubmintIndex       = 2;

// Sascha's Compute ray tracing
// static constexpr uint64_t g_BeginCommandBuffer_indices = 185;
// static constexpr uint64_t g_CmdDraw_indices            = 0;
// static constexpr uint64_t g_CmdDispatch_indices        = 189;
// static constexpr uint64_t g_CmdTraceRaysKHR_indices    = 0;
// static constexpr uint64_t g_QueueSubmit_indices        = 1942;

// Modified vkCube
// static const std::vector<uint64_t>              g_BeginCommandBuffer_indices = { 107 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_indices            = {
//     { 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124 }
// };
// static const std::vector<std::vector<uint64_t>>              g_CmdDispatch_indices;;
// static const std::vector<std::vector<uint64_t>>              g_CmdTraceRaysKHR_indices;;
// static const std::vector<uint64_t>                           g_QueueSubmit_indices   = { 579 };
// static const std::vector<std::vector<std::vector<uint64_t>>> g_RenderPass_indices    = { { { 108, 125 } } };
// static const bool                                            g_dump_rts_before_dc    = false;
// =============================================

// Sponza
// static const std::vector<uint64_t>              g_BeginCommandBuffer_indices = { 1546 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_indices            = {
//     { 1556, 1559, 1562, 1565, 1568, 1571, 1574, 1577, 1580, 1584, 1588, 1592, 1595,
//       1599, 1603, 1606, 1610, 1613, 1617, 1620, 1624, 1628, 1632, 1636, 1640 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_indices;;
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_indices;;
// static const std::vector<uint64_t>              g_QueueSubmit_indices     = { 10143 };

// =============================================

// oit
// static const std::vector<uint64_t>              g_BeginCommandBuffer_indices = { 307 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_indices            = {
//     { 319, 321, 323, 325, 327, 329, 331, 333, 335, 337, 339, 341, 343, 345, 347, 349, 351, 353, 355, 357, 359, 361,
//       363, 365, 367, 369, 371, 373, 375, 377, 379, 381, 383, 385, 387, 389, 391, 393, 395, 397, 399, 401, 403, 405,
//       407, 409, 411, 413, 415, 417, 419, 421, 423, 425, 427, 429, 431, 433, 435, 437, 439, 441, 443, 445, 447, 449,
//       451, 453, 455, 457, 459, 461, 463, 465, 467, 469, 471, 473, 475, 477, 479, 481, 483, 485, 487, 489, 491, 493,
//       495, 497, 499, 501, 503, 505, 507, 509, 511, 513, 515, 517, 519, 521, 523, 525, 527, 529, 531, 533, 535, 537,
//       539, 541, 543, 545, 547, 549, 551, 553, 555, 557, 559, 561, 563, 565, 567, 571, 573, 580 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_indices;;
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_indices;;
// static const std::vector<uint64_t>              g_QueueSubmit_indices     = { 13353 };

// =============================================

// ssao
// static const std::vector<uint64_t>              g_BeginCommandBuffer_indices = { 1792 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_indices            = {
//     { 1801, 1803, 1805, 1807, 1809, 1811, 1813, 1815, 1817, 1819, 1821, 1823, 1825, 1827,
//       1829, 1831, 1833, 1835, 1837, 1839, 1841, 1843, 1845, 1847, 1849, 1856, 1863, 1870 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_indices;;
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_indices;;
// static const std::vector<uint64_t>              g_QueueSubmit_indices     = { 6527 };
// static const std::vector<std::vector<uint64_t>> g_RenderPass_indices     = {
//     { 1793, 1850 }, { 1851, 1857 }, { 1858, 1864 }, { 1865, 1871 }
// };

// =============================================

// pixel6 ssao
// static const std::vector<uint64_t>              g_BeginCommandBuffer_indices = { 34929 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_indices            = {
//     { 34938, 34940, 34942, 34944, 34946, 34948, 34950, 34952, 34954, 34956, 34958, 34960, 34962, 34964,
//       34966, 34968, 34970, 34972, 34974, 34976, 34978, 34980, 34982, 34984, 34986, 34993, 35000, 35007 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_indices;;
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_indices;;
// static const std::vector<uint64_t>              g_QueueSubmit_indices     = { 35276 };

// =============================================

// inputattachments
// static const std::vector<uint64_t>              g_BeginCommandBuffer_indices = { 960 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_indices            = {
//     { 969,  970,  971,  972,  973,  974,  975,  976,  977,  978,  979,  980,  981,  982,  983,  984,  985,  986,
//       987,  988,  989,  990,  991,  992,  993,  994,  995,  996,  997,  998,  999,  1000, 1001, 1002, 1003, 1004,
//       1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022,
//       1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040,
//       1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1060 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_indices;;
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_indices;;
// static const std::vector<uint64_t>              g_QueueSubmit_indices     = { 26292 };

// =============================================

// indirectdraw
// static const std::vector<uint64_t>              g_BeginCommandBuffer_indices = { 560 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_indices            = { { 568, 572, 577 } };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_indices;;
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_indices;;
// static const std::vector<uint64_t>              g_QueueSubmit_indices        = { 1198 };

// =============================================

// subpasses
// static const std::vector<uint64_t>              g_BeginCommandBuffer_indices = { 1218 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_indices            = {
//     { 1227, 1228, 1229, 1230, 1231, 1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243,
//       1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260,
//       1261, 1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277,
//       1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294,
//       1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311,
//       1312, 1313, 1319, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339 }
// };
// static const std::vector<std::vector<uint64_t>> g_CmdDispatch_indices;
// static const std::vector<std::vector<uint64_t>> g_CmdTraceRaysKHR_indices;
// static const std::vector<uint64_t>              g_QueueSubmit_indices = { 2029 };
// static const std::vector<std::vector<uint64_t>> g_RenderPass_indices  = { { 1219, 1316, 1322, 1343 } };

// =============================================

// subpasses pixel 6
// static const std::vector<uint64_t>              g_BeginCommandBuffer_indices = { 36150 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_indices            = {
//     { 36158, 36159, 36160, 36161, 36162, 36163, 36164, 36165, 36166, 36167, 36168, 36169, 36170, 36171, 36172,
//       36173, 36174, 36175, 36176, 36177, 36178, 36179, 36180, 36181, 36182, 36183, 36184, 36185, 36186, 36187,
//       36188, 36189, 36190, 36191, 36192, 36193, 36194, 36195, 36196, 36197, 36198, 36199, 36200, 36201, 36202,
//       36203, 36204, 36205, 36206, 36207, 36208, 36209, 36210, 36211, 36212, 36213, 36214, 36215, 36216, 36217,
//       36218, 36219, 36220, 36221, 36222, 36223, 36224, 36225, 36226, 36227, 36228, 36229, 36230, 36231, 36232,
//       36233, 36234, 36235, 36236, 36237, 36238, 36239, 36240, 36241, 36242, 36243, 36244, 36248, 36254, 36255,
//       36256, 36257, 36258, 36259, 36260, 36261, 36262, 36263, 36264, 36265, 36266 }
// };
// static const std::vector<std::vector<uint64_t>>              g_CmdDispatch_indices;
// static const std::vector<std::vector<uint64_t>>              g_CmdTraceRaysKHR_indices;
// static const std::vector<uint64_t>                           g_QueueSubmit_indices = { 36649 };
// static const std::vector<std::vector<std::vector<uint64_t>>> g_RenderPass_indices  = {
//     { { 36151, 36245, 36249, 36267 } }
// };

// =============================================

// subpasses S22
// static const std::vector<uint64_t>              g_BeginCommandBuffer_indices = { 47395 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_indices            = {
//     { 47404, 47405, 47406, 47407, 47408, 47409, 47410, 47411, 47412, 47413, 47414, 47415, 47416, 47417, 47418,
//       47419, 47420, 47421, 47422, 47423, 47424, 47425, 47426, 47427, 47428, 47429, 47430, 47431, 47432, 47433,
//       47434, 47435, 47436, 47437, 47438, 47439, 47440, 47441, 47442, 47443, 47444, 47445, 47446, 47447, 47448,
//       47449, 47450, 47451, 47452, 47453, 47454, 47455, 47456, 47457, 47458, 47459, 47460, 47461, 47462, 47463,
//       47464, 47465, 47466, 47467, 47468, 47469, 47470, 47471, 47472, 47473, 47474, 47475, 47476, 47477, 47478,
//       47479, 47480, 47481, 47482, 47483, 47484, 47485, 47486, 47487, 47488, 47489, 47490, 47496, 47504, 47505,
//       47506, 47507, 47508, 47509, 47510, 47511, 47512, 47513, 47514, 47515, 47516 }
// };
// static const std::vector<std::vector<uint64_t>>              g_CmdDispatch_indices;
// static const std::vector<std::vector<uint64_t>>              g_CmdTraceRaysKHR_indices;
// static const std::vector<uint64_t>                           g_QueueSubmit_indices = { 47918 };
// static const std::vector<std::vector<std::vector<uint64_t>>> g_RenderPass_indices  = {
//     { { 47396, 47493, 47499, 47518 } }
// };

// =============================================

// gears S22
// static const std::vector<uint64_t>              g_BeginCommandBuffer_indices = { 39816 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_indices            = { { 39824, 39828, 39832 } };

// static const std::vector<std::vector<uint64_t>>              g_CmdDispatch_indices;
// static const std::vector<std::vector<uint64_t>>              g_CmdTraceRaysKHR_indices;
// static const std::vector<uint64_t>                           g_QueueSubmit_indices = { 39908 };
// static const std::vector<std::vector<std::vector<uint64_t>>> g_RenderPass_indices  = { { { 39817, 39833 } } };

// =============================================

// fortnite.skydive2_v2.0
static const std::vector<uint64_t>              g_BeginCommandBuffer_indices = { 6912350 };
static const std::vector<std::vector<uint64_t>> g_CmdDraw_indices            = {
    { 6912376, 6912381, 6912386, 6912391, 6912397, 6912403, 6912408, 6912413, 6912416, 6912419, 6912422, 6912425,
      6912428, 6912431, 6912434, 6912437, 6912440, 6912443, 6912446, 6912449, 6912452, 6912455, 6912458, 6912461,
      6912464, 6912467, 6912471, 6912474, 6912478, 6912482, 6912485, 6912488, 6912491, 6912494, 6912497, 6912500,
      6912503, 6912506, 6912509, 6912512, 6912515, 6912518, 6912521, 6912524, 6912527, 6912533, 6912543, 6912548,
      6912555, 6912560, 6912565, 6912570, 6912575, 6912580, 6912587, 6912592, 6912597, 6912601, 6912605, 6912609,
      6912612, 6912616, 6912619, 6912623, 6912627, 6912631, 6912635, 6912639, 6912642, 6912645, 6912648, 6912651,
      6912654, 6912658, 6912662, 6912665, 6912668, 6912672, 6912676, 6912679, 6912683, 6912687, 6912690, 6912695,
      6912698, 6912702, 6912707, 6912710, 6912715, 6912718, 6912721, 6912724, 6912727, 6912731, 6912734, 6912737,
      6912740, 6912743, 6912746, 6912749, 6912753, 6912756, 6912759, 6912762, 6912765, 6912768, 6912771, 6912774,
      6912777, 6912780, 6912783, 6912786, 6912789, 6912792, 6912795, 6912799, 6912802, 6912805, 6912808, 6912811,
      6912814, 6912818, 6912821, 6912825, 6912828, 6912831, 6912834, 6912837, 6912840, 6912843, 6912846, 6912849,
      6912852, 6912856, 6912859, 6912863, 6912866, 6912869, 6912872, 6912875, 6912878, 6912881, 6912884, 6912888,
      6912891, 6912894, 6912898, 6912901, 6912904, 6912907, 6912910, 6912913, 6912917, 6912920, 6912924, 6912927,
      6912930, 6912933, 6912936, 6912939, 6912942, 6912945, 6912948, 6912951, 6912954, 6912957, 6912960, 6912963,
      6912967, 6912970, 6912973, 6912976, 6912980, 6912983, 6912986, 6912989, 6912992, 6912996, 6912999, 6913002,
      6913005, 6913008, 6913011, 6913014, 6913017, 6913021, 6913024, 6913028, 6913031, 6913034, 6913037, 6913040,
      6913043, 6913046, 6913049, 6913052, 6913055, 6913059, 6913062, 6913066, 6913069, 6913072, 6913077, 6913080,
      6913083, 6913086, 6913089, 6913092, 6913095, 6913098, 6913101, 6913104, 6913107, 6913110, 6913113, 6913116,
      6913119, 6913122, 6913125, 6913128, 6913131, 6913134, 6913139, 6913142, 6913146, 6913150, 6913153, 6913156,
      6913159, 6913163, 6913166, 6913169, 6913174, 6913177, 6913180, 6913183, 6913187, 6913190, 6913193, 6913196,
      6913199, 6913202, 6913205, 6913208, 6913211, 6913214, 6913217, 6913220, 6913223, 6913226, 6913229, 6913232,
      6913235, 6913238, 6913242, 6913245, 6913248, 6913251, 6913254, 6913257, 6913260, 6913263, 6913267, 6913272,
      6913275, 6913279, 6913282, 6913286, 6913289, 6913292, 6913295, 6913298, 6913301, 6913304, 6913307, 6913311,
      6913315, 6913319, 6913322, 6913325, 6913328, 6913331, 6913335, 6913339, 6913342, 6913346, 6913350, 6913353,
      6913356, 6913360, 6913363, 6913366, 6913369, 6913372, 6913377, 6913380, 6913383, 6913386, 6913389, 6913393,
      6913398, 6913401, 6913404, 6913407, 6913410, 6913413, 6913416, 6913419, 6913422, 6913425, 6913428, 6913431,
      6913435, 6913439, 6913442, 6913445, 6913448, 6913452, 6913456, 6913459, 6913462, 6913467, 6913471, 6913474,
      6913477, 6913481, 6913484, 6913489, 6913492, 6913495, 6913498, 6913501, 6913504, 6913507, 6913510, 6913513,
      6913516, 6913519, 6913522, 6913525, 6913528, 6913531, 6913534, 6913537, 6913540, 6913543, 6913546, 6913549,
      6913552, 6913557, 6913560, 6913565, 6913568, 6913571, 6913574, 6913577, 6913581, 6913584, 6913587, 6913590,
      6913593, 6913596, 6913599, 6913602, 6913607, 6913610, 6913613, 6913616, 6913620, 6913625, 6913628, 6913633,
      6913638, 6913641, 6913644, 6913647, 6913650, 6913655, 6913660, 6913665, 6913668, 6913672, 6913676, 6913679,
      6913684, 6913687, 6913691, 6913695, 6913698, 6913702, 6913706, 6913710, 6913715, 6913719, 6913723, 6913727,
      6913732, 6913736, 6913740, 6913745, 6913750, 6913753, 6913756, 6913759, 6913762, 6913765, 6913770, 6913773,
      6913776, 6913779, 6913782, 6913785, 6913788, 6913791, 6913794, 6913797, 6913800, 6913803, 6913806, 6913809,
      6913812, 6913816, 6913819, 6913823, 6913826, 6913829, 6913832, 6913836, 6913839, 6913842, 6913845, 6913848,
      6913851, 6913854, 6913857, 6913860, 6913863, 6913866, 6913869, 6913872, 6913876, 6913879, 6913882, 6913885,
      6913888, 6913892, 6913897, 6913900, 6913904, 6913909, 6913913, 6913917, 6913921, 6913925, 6913929, 6913933,
      6913937, 6913941, 6913945, 6913949, 6913953, 6913957, 6913961, 6913965, 6913969, 6913973, 6913977, 6913981,
      6913985, 6913989, 6913993, 6913997, 6914001, 6914005, 6914009, 6914013, 6914017, 6914021, 6914025, 6914030,
      6914034, 6914038, 6914042, 6914046, 6914050, 6914054, 6914058, 6914062, 6914066, 6914070, 6914074, 6914078,
      6914082, 6914086, 6914090, 6914094, 6914098, 6914102, 6914106, 6914110, 6914114, 6914118, 6914122, 6914126,
      6914130, 6914134, 6914138, 6914142, 6914147, 6914152, 6914156, 6914160, 6914164, 6914168, 6914172, 6914176,
      6914180, 6914184, 6914189, 6914193, 6914197, 6914202, 6914206, 6914211, 6914216, 6914221, 6914224, 6914227,
      6914234, 6914239, 6914244, 6914249, 6914256, 6914261, 6914266, 6914271, 6914276, 6914281, 6914286, 6914291,
      6914296, 6914301, 6914306, 6914311, 6914316, 6914321, 6914326, 6914331, 6914336, 6914341, 6914346, 6914353,
      6914358, 6914363, 6914368, 6914373, 6914378, 6914383, 6914388, 6914393, 6914399, 6914404, 6914409, 6914414,
      6914419, 6914424, 6914429, 6914434, 6914441, 6914446, 6914451, 6914455, 6914459, 6914463, 6914468, 6914471,
      6914474, 6914477, 6914480, 6914484, 6914487, 6914490, 6914495, 6914498, 6914501, 6914504, 6914508, 6914511,
      6914514, 6914517, 6914520, 6914525, 6914528, 6914531, 6914538, 6914543, 6914548, 6914551, 6914554, 6914559,
      6914562, 6914565, 6914568, 6914571, 6914574, 6914577, 6914580, 6914583, 6914586, 6914589, 6914592, 6914597,
      6914600, 6914603, 6914606, 6914609, 6914612, 6914615, 6914618, 6914621, 6914624, 6914627, 6914630, 6914633,
      6914636, 6914639, 6914642, 6914645, 6914648, 6914651, 6914654, 6914657, 6914660, 6914663, 6914666, 6914669,
      6914672, 6914675, 6914678, 6914681, 6914684, 6914688, 6914691, 6914696, 6914700, 6914703, 6914706, 6914709,
      6914713, 6914718, 6914721, 6914724, 6914727, 6914730, 6914733, 6914736, 6914739, 6914742, 6914745, 6914748,
      6914751, 6914754, 6914757, 6914760, 6914763, 6914766, 6914769, 6914772, 6914775, 6914778, 6914781, 6914786,
      6914789, 6914793, 6914796, 6914799, 6914804, 6914807, 6914812, 6914816, 6914820, 6914824, 6914828, 6914832,
      6914836, 6914840, 6914844, 6914848, 6914852, 6914856, 6914860, 6914864, 6914868, 6914872, 6914876, 6914880,
      6914884, 6914888, 6914892, 6914896, 6914900, 6914904, 6914908, 6914912, 6914916, 6914920, 6914924, 6914928,
      6914932, 6914936, 6914940, 6914944, 6914948, 6914952, 6914956, 6914960, 6914964, 6914968, 6914972, 6914976,
      6914980, 6914984, 6914988, 6914992, 6914996, 6915000, 6915004, 6915008, 6915012, 6915016, 6915020, 6915024,
      6915028, 6915032, 6915036, 6915040, 6915044, 6915048, 6915052, 6915056, 6915060, 6915064, 6915068, 6915072,
      6915076, 6915080, 6915084, 6915088, 6915092, 6915096, 6915100, 6915104, 6915108, 6915112, 6915116, 6915120,
      6915124, 6915128, 6915132, 6915136, 6915140, 6915144, 6915148, 6915152, 6915156, 6915160, 6915164, 6915168,
      6915172, 6915176, 6915180, 6915184, 6915188, 6915192, 6915196, 6915200, 6915204, 6915208, 6915212, 6915216,
      6915220, 6915224, 6915228, 6915232, 6915236, 6915240, 6915244, 6915248, 6915252, 6915256, 6915260, 6915264,
      6915268, 6915272, 6915276, 6915280, 6915284, 6915288, 6915292, 6915296, 6915300, 6915304, 6915308, 6915312,
      6915316, 6915320, 6915324, 6915328, 6915332, 6915336, 6915340, 6915344, 6915348, 6915352, 6915356, 6915360,
      6915364, 6915368, 6915372, 6915376, 6915380, 6915384, 6915388, 6915392, 6915396, 6915400, 6915404, 6915408,
      6915412, 6915416, 6915420, 6915424, 6915428, 6915432, 6915436, 6915440, 6915444, 6915450, 6915457, 6915464,
      6915470, 6915476, 6915481, 6915485, 6915488, 6915491, 6915494, 6915498, 6915501, 6915504, 6915508, 6915513,
      6915517, 6915521, 6915525, 6915530, 6915534, 6915538, 6915542, 6915547, 6915551, 6915555, 6915560, 6915564,
      6915569, 6915573, 6915578, 6915583, 6915588, 6915593, 6915598, 6915602, 6915605, 6915608, 6915611, 6915615,
      6915618, 6915621, 6915625, 6915630, 6915638, 6915646, 6915654, 6915662, 6915670, 6915678, 6915686, 6915694,
      6915702, 6915710, 6915716, 6915724, 6915729, 6915735, 6915741, 6915747, 6915753, 6915759, 6915765, 6915771,
      6915777, 6915783, 6915789, 6915795, 6915801, 6915807, 6915813, 6915819, 6915825, 6915831, 6915837, 6915843,
      6915849, 6915855, 6915861, 6915867, 6915873, 6915879, 6915885, 6915891, 6915897, 6915903, 6915909, 6915915,
      6915921, 6915927, 6915933, 6915939, 6915945, 6915951, 6915957, 6915963, 6915969, 6915975, 6915981, 6915987,
      6915993, 6915999, 6916005, 6916011, 6916017, 6916023, 6916029, 6916035, 6916041, 6916047, 6916053, 6916059,
      6916065, 6916071, 6916077, 6916083, 6916089, 6916095, 6916101, 6916107, 6916113, 6916119, 6916125, 6916131,
      6916137, 6916143, 6916149, 6916155, 6916161, 6916167, 6916173, 6916179, 6916185, 6916191, 6916197, 6916203,
      6916209, 6916215, 6916221, 6916227, 6916233, 6916239, 6916245, 6916251, 6916257, 6916263, 6916269, 6916275,
      6916281, 6916287, 6916293, 6916299, 6916305, 6916311, 6916317, 6916323, 6916329, 6916335, 6916341, 6916347,
      6916353, 6916359, 6916365, 6916371, 6916377, 6916383, 6916389, 6916395, 6916401, 6916407, 6916413, 6916419,
      6916425, 6916431, 6916437, 6916443, 6916449, 6916455, 6916461, 6916467, 6916473, 6916479, 6916485, 6916491,
      6916497, 6916503, 6916509, 6916515, 6916521, 6916527, 6916533, 6916539, 6916545, 6916551, 6916557, 6916563,
      6916569, 6916575, 6916581, 6916587, 6916593, 6916599, 6916605, 6916611, 6916617, 6916623, 6916629, 6916635,
      6916641, 6916647, 6916653, 6916659, 6916665, 6916671, 6916677, 6916683, 6916689, 6916695, 6916701, 6916707,
      6916713, 6916719, 6916725, 6916731, 6916737, 6916743, 6916749, 6916755, 6916761, 6916767, 6916773, 6916779,
      6916785, 6916791, 6916797, 6916803, 6916809, 6916815, 6916821, 6916827, 6916833, 6916839, 6916845 }
};
static const std::vector<std::vector<uint64_t>>              g_CmdDispatch_indices;
static const std::vector<std::vector<uint64_t>>              g_CmdTraceRaysKHR_indices;
static const std::vector<uint64_t>                           g_QueueSubmit_indices = { 6916862 };
static const std::vector<std::vector<std::vector<uint64_t>>> g_RenderPass_indices  = {
    { { 6912368, 6915451, 6915458, 6916847 } }
};

// =============================================

// Gfxbench: temple run pixel 6
// static const std::vector<uint64_t>              g_BeginCommandBuffer_indices = { 2895453, 2897288 };
// static const std::vector<std::vector<uint64_t>> g_CmdDraw_indices            = {
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
// static const std::vector<std::vector<uint64_t>>              g_CmdDispatch_indices;
// static const std::vector<std::vector<uint64_t>>              g_CmdTraceRaysKHR_indices;
// static const std::vector<uint64_t>                           g_QueueSubmit_indices     = { 2897133, 2901269 };
// static const std::vector<std::vector<std::vector<uint64_t>>> g_RenderPass_indices     = {
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

struct VulkanReplayOptions : public ReplayOptions
{
    bool                         enable_vulkan{ true };
    bool                         skip_failed_allocations{ false };
    bool                         omit_pipeline_cache_data{ false };
    bool                         remove_unsupported_features{ false };
    bool                         use_colorspace_fallback{ false };
    bool                         offscreen_swapchain_frame_boundary{ false };
    bool                         dumping_resource{ true };
    util::SwapchainOption        swapchain_option{ util::SwapchainOption::kVirtual };
    bool                         virtual_swapchain_skip_blit{ false };
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
    SkipGetFenceStatus           skip_get_fence_status{ SkipGetFenceStatus::NoSkip };
    std::vector<util::UintRange> skip_get_fence_ranges;
    bool                         wait_before_present{ false };
    std::string                  dump_resources;

    std::vector<uint64_t>                           BeginCommandBuffer_Indices;
    std::vector<std::vector<uint64_t>>              Draw_Indices;
    std::vector<std::vector<std::vector<uint64_t>>> RenderPass_Indices;
    std::vector<std::vector<uint64_t>>              Dispatch_Indices;
    std::vector<std::vector<uint64_t>>              TraceRays_Indices;
    std::vector<uint64_t>                           QueueSubmit_Indices;

    bool                                            dump_rts_before_dc{ false };
    bool                                            isolate_draw{ false }; // How should this be set?
    bool                                            dump_resource_enabled{ false };
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_DECODE_VULKAN_REPLAY_OPTIONS_H
