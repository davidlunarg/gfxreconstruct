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

#include "format/platform_types.h"
#include "generated/generated_vulkan_ascii_enum_util.h"
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

typedef std::function<void(FILE *, uint32_t)> OutputEnumFuncPtr;

typedef struct OutputScalarValueStructInfo {
   bool is_handle_or_addr;
   bool is_enum;
   bool is_flags;
   OutputEnumFuncPtr enum_to_string_func;
} OutputScalarValueStructInfo;


// Function to write a std::string to the output file
void OutputString(FILE* outputFile, const std::string &s)
{
    assert(outputFile != nullptr);
    fprintf(outputFile, "%s", s.c_str());
}

void OutputSignedDecimal(FILE* outputFile, int64_t n)
{
    assert(outputFile != nullptr);
    fprintf(outputFile, "%" PRId64, n);
}

void OutputUnsignedDecimal(FILE* outputFile, uint64_t n)
{
    assert(outputFile != nullptr);
    fprintf(outputFile, "%" PRIu64, n);
}

void OutputDouble(FILE* outputFile, double d)
{
    assert(outputFile != nullptr);
    fprintf(outputFile, "%g", d);
}

void OutputAddr(FILE* outputFile, uint64_t a)
{
    assert(outputFile != nullptr);
    if (kNoAddr)
    {
        fprintf(outputFile, "address");
    }
    else
    {
        fprintf(outputFile, "0x%" PRIx64, a);
    }
}

void OutputIndent(FILE* outputFile, int indent)
{
    assert(outputFile != nullptr);
    std::string out("");
    out.insert(out.end(), indent * kIndentSize, ' ');
    OutputString(outputFile, out);
}

void OutputFlags(FILE* outputFile, VkFlags flags, OutputEnumFuncPtr enum_to_string_func)
{
    assert(outputFile != nullptr);
    VkFlags m = 1;
    OutputUnsignedDecimal(outputFile, flags);
    if (flags != 0)
    {
        OutputString(outputFile, " (");
        while (flags)
        {
            if (m & flags)
            {
                enum_to_string_func(outputFile, (m & flags));
                flags = flags & ~m;
                if (flags & ~m)
                {
                    OutputString(outputFile, " | ");
                }
            }
            else
            {
                flags &= ~m;
            }
            m <<= 1;
        }
        OutputString(outputFile, ")");
    }
}

template <typename T>
void OutputScalarValue(FILE* outputFile, T value, const OutputScalarValueStructInfo &vinfo)
{
    assert(outputFile != nullptr);
    assert((vinfo.is_handle_or_addr + vinfo.is_enum  + vinfo.is_flags) <= 1);
    assert(vinfo.is_enum ? vinfo.enum_to_string_func != nullptr : true);
    assert(vinfo.is_flags ? vinfo.enum_to_string_func != nullptr : true);
    if (vinfo.is_handle_or_addr)
    {
        uint64_t v = *((uint64_t*)value);
        OutputAddr(outputFile, v);
    }
    else if (vinfo.is_flags)
    {
        uint32_t v = *((uint32_t*)value);
        OutputFlags(outputFile, v, vinfo.enum_to_string_func);
    }
    else if (vinfo.is_enum)
    {
        uint32_t v = *((uint32_t*)value);
        vinfo.enum_to_string_func(outputFile, v);
    }
    else if (std::is_same<T, float*>::value || std::is_same<T, const float*>::value)
    {
        double v = *((float*)value);
        OutputDouble(outputFile, v);
    }
    else if (std::is_same<T, double*>::value || std::is_same<T, const double*>::value)
    {
        OutputDouble(outputFile, *((double*)value));
    }
    else if (std::is_same<T, int32_t*>::value || std::is_same<T, const int32_t*>::value)
    {
        int32_t v = *((int32_t*)value);
        OutputSignedDecimal(outputFile, v);
    }
    else if (std::is_same<T, uint32_t*>::value || std::is_same<T, const uint32_t*>::value)
    {
        uint32_t v = *((uint32_t*)value);
        OutputUnsignedDecimal(outputFile, v);
    }
    else if (std::is_same<T, int64_t*>::value || std::is_same<T, const int64_t*>::value)
    {
        int64_t v = *((int64_t*)value);
        OutputSignedDecimal(outputFile, v);
    }
    else if (std::is_same<T, unsigned int*>::value || std::is_same<T, const unsigned int*>::value)
    {
        unsigned int v = *((unsigned int*)value);
        OutputUnsignedDecimal(outputFile, v);
    }
    else if (std::is_same<T, unsigned char*>::value || std::is_same<T, const unsigned char*>::value)
    {
        unsigned char v = *((unsigned char*)value);
        OutputUnsignedDecimal(outputFile, v);
    }
    else
    {
        uint64_t v = *((uint64_t*)value);
        OutputUnsignedDecimal(outputFile, v);
    }
}

void StringToQuotedString(FILE* outputFile, const char* s)
{
    assert(outputFile != nullptr);
    std::string out;
    if (s != nullptr)
    {
        out += "\"";
        out += s;
        out += "\"";
    }
    else
    {
        out += "NULL";
    }
    OutputString(outputFile, out);
}

void WideStringToQuotedString(FILE *outputFile, const wchar_t* s)
{
    assert(outputFile != nullptr);
    if (s != nullptr)
    {
        OutputString(outputFile, "\"");
        fprintf(outputFile, "%ls", s);
        OutputString(outputFile, "\"");
    }
    else
    {
        OutputString(outputFile, "NULL");
    }
}

template <typename T>
void OutputArray(FILE*                             outputFile,
                 int                               indent,
                 const int                         pointer_count,
                 const char*                       full_type_name,
                 const T                           array,
                 const char*                       array_name,
                 const size_t                      array_length,
                 const OutputScalarValueStructInfo &vinfo)
{
    assert(outputFile != nullptr);
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
        StringToQuotedString(outputFile, *((const char**)&array));
    }
    else
    {
        std::string full_type_name_str = full_type_name;
        if (*full_type_name_str.rbegin() == '*')
        {
            full_type_name_str.pop_back();
        }
        OutputString(outputFile, "\n");
        for (uint64_t j = 0; j < array_length; j++)
        {
            char tmp_string[100];
            OutputIndent(outputFile, indent + 1);
            snprintf(tmp_string, sizeof(tmp_string), "%s[%" PRIu64 "]:", array_name, j);
            fprintf(outputFile, "%-32s", tmp_string);
            OutputString(outputFile, full_type_name_str);
            OutputString(outputFile, " = ");
            if (pointer_count > 1)
            {
                if (pointer_count == 2 && strstr(full_type_name, "char"))
                {
                    StringToQuotedString(outputFile, ((const char**)array)[j]);
                }
                else
                {
                    fprintf(stderr, "ERROR: OutputArray arrays of non-strings not implemented\n");
                }
            }
            else
            {
                OutputScalarValue<T>(outputFile, &array[j], vinfo);
            }
            if (j < array_length - 1)
            {
                OutputString(outputFile, "\n");
            }
        }
    }
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
