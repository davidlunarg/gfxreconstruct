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

#ifndef GFXRECON_ENCODE_CUSTOM_STRUCT_ENCODERS_H
#define GFXRECON_ENCODE_CUSTOM_STRUCT_ENCODERS_H

#include "encode/parameter_encoder.h"
#include "format/platform_types.h"
#include "util/defines.h"

#include "vulkan/vulkan.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

// Unions.
void EncodeStruct(encode::ParameterEncoder* encoder, const VkClearColorValue& value);
void EncodeStruct(encode::ParameterEncoder* encoder, const VkClearValue& value);

// Vulkan structures that require special processing that the code generator cannot infer from the XML registry.
void EncodeStruct(encode::ParameterEncoder* encoder, const VkObjectTableEntryNVX* value);

// Platform defined structures that are external to Vulkan.
void EncodeStruct(encode::ParameterEncoder* encoder, const ACL& value);
void EncodeStruct(encode::ParameterEncoder* encoder, const SECURITY_DESCRIPTOR& value);
void EncodeStruct(encode::ParameterEncoder* encoder, const SECURITY_ATTRIBUTES& value);

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_ENCODE_CUSTOM_STRUCT_ENCODERS_H
