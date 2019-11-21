/*
** Copyright (c) 2018-2019 Valve Corporation
** Copyright (c) 2018-2019 LunarG, Inc.
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

/*
** This file contains utilities used by gfxrecon-toascii for generating
** strings to display api call argument values.
** Most of gfxrecon-toascii is generated code. This file
** contains the "static" code that does not need to be generated.
*/

#ifndef GFXRECON_UTILS_ASCII_UTILS_H
#define GFXRECON_UTILS_ASCII_UTILS_H

#include "generated/generated_vulkan_ascii_struct_util.h"
#include "format/platform_types.h"
#include "util/defines.h"
#include "vulkan/vulkan.h"
#include <functional>
#include <inttypes.h>
#include <string>

extern int  kIndentSize;
extern bool kNoAddr;
extern bool kPrintShaderCode;

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

typedef std::function<void(std::string *, uint32_t)> EnumToStringFuncPtr;

typedef struct ScalarValueToStringStruct {
   bool is_handle_or_addr;
   bool is_enum;
   bool is_flags;
   EnumToStringFuncPtr enum_to_string_func;
} ScalarValueToStringStruct;

void SignedDecimalToString(std::string* out, int64_t n)
{
    char tmp[30];
    assert(out != nullptr);
    snprintf(tmp, sizeof(tmp), "%" PRId64, n);
    snprintf(tmp, sizeof(tmp), "%" PRId64, n);
    *out += tmp;
}

void UnsignedDecimalToString(std::string* out, uint64_t n)
{
    char tmp[30];
    assert(out != nullptr);
    snprintf(tmp, sizeof(tmp), "%" PRIu64, n);
    *out += tmp;
}

void DoubleToString(std::string* out, double d)
{
    char tmp[30];
    snprintf(tmp, sizeof(tmp), "%g", d);
    *out += tmp;
}

void AddrToString(std::string* out, uint64_t a)
{
    assert(out != nullptr);
    if (kNoAddr)
    {
        *out += "address";
    }
    else
    {
        char tmp[30];
        snprintf(tmp, sizeof(tmp), "0x%" PRIx64, a);
        *out += tmp;
    }
}

void IndentSpaces(std::string* out, int indent)
{
    assert(out != nullptr);
    out->insert(out->end(), indent * kIndentSize, ' ');
}

void FlagsToString(std::string* out, VkFlags flags, EnumToStringFuncPtr enum_to_string_func)
{
    VkFlags m = 1;
    assert(out != nullptr);
    UnsignedDecimalToString(out, flags);
    if (flags != 0)
    {
        *out += " (";
        while (flags)
        {
            if (m & flags)
            {
                enum_to_string_func(out, (m & flags));
                flags = flags & ~m;
                if (flags & ~m)
                {
                    *out += " | ";
                }
            }
            else
            {
                flags &= ~m;
            }
            m <<= 1;
        }
        *out += ")";
    }
    return;
}

template <typename T>
void ScalarValueToString(std::string* out, T value, const ScalarValueToStringStruct &vinfo)
{
    assert(out != nullptr);
    assert((vinfo.is_handle_or_addr + vinfo.is_enum  + vinfo.is_flags) <= 1);
    assert(vinfo.is_enum ? vinfo.enum_to_string_func != nullptr : true);
    assert(vinfo.is_flags ? vinfo.enum_to_string_func != nullptr : true);
    if (vinfo.is_handle_or_addr)
    {
        uint64_t v = *((uint64_t*)value);
        AddrToString(out, v);
    }
    else if (vinfo.is_flags)
    {
        uint32_t v = *((uint32_t*)value);
        FlagsToString(out, v, vinfo.enum_to_string_func);
    }
    else if (vinfo.is_enum)
    {
        uint32_t v = *((uint32_t*)value);
        vinfo.enum_to_string_func(out, v);
    }
    else if (std::is_same<T, float*>::value || std::is_same<T, const float*>::value)
    {
        double v = *((float*)value);
        DoubleToString(out, v);
    }
    else if (std::is_same<T, double*>::value || std::is_same<T, const double*>::value)
    {
        DoubleToString(out, *((double*)value));
    }
    else if (std::is_same<T, int32_t*>::value || std::is_same<T, const int32_t*>::value)
    {
        int32_t v = *((int32_t*)value);
        SignedDecimalToString(out, v);
    }
    else if (std::is_same<T, uint32_t*>::value || std::is_same<T, const uint32_t*>::value)
    {
        uint32_t v = *((uint32_t*)value);
        UnsignedDecimalToString(out, v);
    }
    else if (std::is_same<T, int64_t*>::value || std::is_same<T, const int64_t*>::value)
    {
        int64_t v = *((int64_t*)value);
        SignedDecimalToString(out, v);
    }
    else if (std::is_same<T, unsigned int*>::value || std::is_same<T, const unsigned int*>::value)
    {
        unsigned int v = *((unsigned int*)value);
        UnsignedDecimalToString(out, v);
    }
    else if (std::is_same<T, unsigned char*>::value || std::is_same<T, const unsigned char*>::value)
    {
        unsigned char v = *((unsigned char*)value);
        UnsignedDecimalToString(out, v);
    }
    else
    {
        uint64_t v = *((uint64_t*)value);
        UnsignedDecimalToString(out, v);
    }
}

void StringToQuotedString(std::string* out, const char* s)
{
    assert(out != nullptr);
    if (s != nullptr)
    {
        *out += "\"";
        *out += s;
        *out += "\"";
    }
    else
    {
        *out += "NULL";
    }
}

void PadString(std::string* s, size_t len)
{
    assert(s != nullptr);
    if (s->length() < len)
    {
        s->insert(s->end(), len - s->length(), ' ');
    }
}

template <typename T>
void ArrayToString(std::string*                    out,
                   int                             indent,
                   const int                       pointer_count,
                   const char*                     full_type_name,
                   const T                         array,
                   const char*                     array_name,
                   const size_t                    array_length,
                   const ScalarValueToStringStruct &vinfo)
{
    assert(out != nullptr);
    assert((vinfo.is_handle_or_addr + vinfo.is_enum  + vinfo.is_flags) <= 1);
    assert(vinfo.is_enum ? vinfo.enum_to_string_func != nullptr : true);
    assert(vinfo.is_flags ? vinfo.enum_to_string_func != nullptr : true);
    if (array_length == 0 || array == nullptr)
    {
        return;
    }
    if (pointer_count <= 1 &&
        (std::is_same<T, const char>::value || std::is_same<T, const char>::value || std::is_same<T, char>::value ||
         std::is_same<T, const char*>::value || std::is_same<T, char*>::value))
    {
        StringToQuotedString(out, *((const char**)&array));
    }
    else
    {
        std::string full_type_name_str = full_type_name;
        if (*full_type_name_str.rbegin() == '*')
        {
            full_type_name_str.pop_back();
        }
        *out += "\n";
        for (uint64_t j = 0; j < array_length; j++)
        {
            IndentSpaces(out, indent + 1);
            std::string name_and_index;
            name_and_index += array_name;
            name_and_index += "[";
            UnsignedDecimalToString(&name_and_index, j);
            name_and_index += "]: ";
            PadString(&name_and_index, 32);
            *out += name_and_index;
            *out += full_type_name_str;
            *out += " = ";
            if (pointer_count > 1)
            {
                if (pointer_count == 2 && strstr(full_type_name, "char"))
                {
                    StringToQuotedString(out, ((const char**)array)[j]);
                }
                else
                {
                    fprintf(stderr, "ERROR: ArrayToString arrays of non-strings not implemented\n");
                }
            }
            else
            {
                ScalarValueToString<T>(out, &array[j], vinfo);
            }
            if (j < array_length - 1)
            {
                *out += "\n";
            }
        }
    }
}

template <typename T>
void ArrayOfStructsToString(std::string* out,
                            int          indent,
                            const int    pointer_count,
                            const char*  base_type_name,
                            T*           array,
                            const char*  array_name,
                            const size_t array_length,
                            bool         is_union,
                            uint64_t     base_addr)
{
    assert(out != nullptr);
    if (array_length == 0 || array == nullptr)
    {
        return;
    }
    *out += "\n";
    for (uint64_t j = 0; j < array_length; j++)
    {
        IndentSpaces(out, indent);
        std::string name_and_index;
        name_and_index += array_name;
        name_and_index += "[";
        UnsignedDecimalToString(&name_and_index, j);
        name_and_index += "]: ";
        PadString(&name_and_index, 32);
        *out += name_and_index;
        *out += base_type_name;
        *out += " = ";
        AddrToString(out, base_addr + j * sizeof(T)); // UEW
        if (is_union)
        {
            *out += " (Union)";
        }
        *out += ":";
        if (pointer_count > 1)
        {
            fprintf(stderr, "ERROR: ArrayOfStructsToString cannot handle arrays of arrays\n");
        }
        else
        {
            StructureToString(out, array[j], indent + 1, base_addr + j * sizeof(T)); // YQS
        }
        if (j < array_length - 1)
        {
            *out += "\n"; // AZC
        }
    }
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
