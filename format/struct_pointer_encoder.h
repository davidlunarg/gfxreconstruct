/*
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

#ifndef BRIMSTONE_STRUCT_POINTER_ENCODER_H
#define BRIMSTONE_STRUCT_POINTER_ENCODER_H

#include "format/parameter_encoder.h"
#include "format/platform_types.h"
#include "util/defines.h"

BRIMSTONE_BEGIN_NAMESPACE(brimstone)

template <typename T>
size_t encode_struct_ptr(format::ParameterEncoder* encoder, const T* value)
{
    size_t result = encoder->EncodeStructPtrPreamble(value);
    if (value != nullptr)
    {
        result += encode_struct(encoder, *value);
    }
    return result;
}

template <typename T>
size_t encode_struct_array(format::ParameterEncoder* encoder, const T* value, size_t len)
{
    size_t result = encoder->EncodeStructArrayPreamble(value, len);
    if ((value != nullptr) && (len > 0))
    {
        for (size_t i = 0; i < len; ++i)
        {
            result = encode_struct(encoder, value[i]);
        }
    }
    return result;
}

// TODO: [BRIM-5] handle special encoding cases.
inline size_t encode_struct_ptr(format::ParameterEncoder* encoder, const void* value)
{
    return 0;
}

inline size_t encode_struct_array(format::ParameterEncoder* encoder, const VkObjectTableEntryNVX* const* value, size_t len)
{
    return 0;
}

BRIMSTONE_END_NAMESPACE(brimstone)

#endif // BRIMSTONE_STRUCT_POINTER_ENCODER_H