/*
** Copyright (c) 2018-2020 Valve Corporation
** Copyright (c) 2018-2020 LunarG, Inc.
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
** This file contains utilities used by gfxrecon-tojson for generating
** strings to display api call argument values.
** Most of gfxrecon-tojson is generated code. This file
** contains the "static" code that does not need to be generated.
*/

#ifndef GFXRECON_UTILS_JSON_UTILS_H
#define GFXRECON_UTILS_JSON_UTILS_H

#include "generated/generated_vulkan_json_struct_util.h"
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

typedef std::function<void(FILE *, uint32_t)> EnumToStringFuncPtr;

typedef struct ScalarValueToStringStruct {
   bool is_handle_or_addr;
   bool is_enum;
   bool is_flags;
   EnumToStringFuncPtr enum_to_string_func;
} ScalarValueToStringStruct;

// Function to write a std::string to the output file
void OutputStringJson(FILE* outputFile, const std::string &s)
{
    assert(outputFile != nullptr);
    fprintf(outputFile, "%s", s.c_str());
}

void SignedDecimalToStringJson(FILE *outputFile, int64_t n)
{
    assert(outputFile != nullptr);
    fprintf(outputFile, "%" PRId64, n);
}

void UnsignedDecimalToStringJson(FILE *outputFile, uint64_t n)
{
    assert(outputFile != nullptr);
    fprintf(outputFile, "%" PRIu64, n);
}

void DoubleToStringJson(FILE *outputFile, double d)
{
    assert(outputFile != nullptr);
    fprintf(outputFile, "%g", d);
}

void AddrToStringJson(FILE *outputFile, uint64_t a)
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

void IndentSpacesJson(FILE *outputFile, int indent)
{
    assert(outputFile != nullptr);
    std::string out("");
    out.insert(out.end(), indent * kIndentSize, ' ');
    OutputStringJson(outputFile, out);
}

void FlagsToStringJson(FILE *outputFile, VkFlags flags, EnumToStringFuncPtr enum_to_string_func)
{
    VkFlags m = 1;
    assert(outputFile != nullptr);
    UnsignedDecimalToStringJson(outputFile, flags);
    if (flags != 0)
    {
        OutputStringJson(outputFile, " (");
        while (flags)
        {
            if (m & flags)
            {
                enum_to_string_func(outputFile, (m & flags));
                flags = flags & ~m;
                if (flags & ~m)
                {
                    OutputStringJson(outputFile, " | ");
                }
            }
            else
            {
                flags &= ~m;
            }
            m <<= 1;
        }
        OutputStringJson(outputFile, ")");
    }
}

template <typename T>
void ScalarValueToStringJson(FILE *outputFile, const T* value, const ScalarValueToStringStruct& vinfo)
{
    assert(outputFile != nullptr);
    assert((vinfo.is_handle_or_addr + vinfo.is_enum  + vinfo.is_flags) <= 1);
    assert(vinfo.is_enum ? vinfo.enum_to_string_func != nullptr : true);
    assert(vinfo.is_flags ? vinfo.enum_to_string_func != nullptr : true);
    if (vinfo.is_handle_or_addr)
    {
        AddrToStringJson(outputFile, *(reinterpret_cast<const uint64_t*>(value)));
    }
    else if (vinfo.is_flags)
    {
        FlagsToStringJson(outputFile, *(reinterpret_cast<const uint32_t*>(value)), vinfo.enum_to_string_func);
    }
    else if (vinfo.is_enum)
    {
        vinfo.enum_to_string_func(outputFile, *(reinterpret_cast<const uint32_t*>(value)));
    }
    else if (std::is_same<T, float>::value)
    {
        DoubleToStringJson(outputFile, *(reinterpret_cast<const float*>(value)));
    }
    else if (std::is_same<T, double>::value)
    {
        DoubleToStringJson(outputFile, *(reinterpret_cast<const double*>(value))); //??
    }
    else if (std::is_same<T, int32_t>::value)
    {
        SignedDecimalToStringJson(outputFile, *(reinterpret_cast<const int32_t*>(value)));
    }
    else if (std::is_same<T, uint32_t>::value)
    {
        UnsignedDecimalToStringJson(outputFile, *(reinterpret_cast<const uint32_t*>(value)));
    }
    else if (std::is_same<T, int64_t>::value)
    {
        SignedDecimalToStringJson(outputFile, *(reinterpret_cast<const int64_t*>(value)));
    }
    else if (std::is_same<T, unsigned int>::value)
    {
        UnsignedDecimalToStringJson(outputFile, *(reinterpret_cast<const int*>(value)));
    }
    else if (std::is_same<T, unsigned char>::value)
    {
        UnsignedDecimalToStringJson(outputFile, *(reinterpret_cast<const unsigned char*>(value)));
    }
    else
    {
        UnsignedDecimalToStringJson(outputFile, *(reinterpret_cast<const uint64_t*>(value)));
    }
}

void StringToQuotedStringJson(FILE *outputFile, const char* s)
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
    OutputStringJson(outputFile, out);
}

void PadStringJson(std::string* s, size_t len)
{
    assert(s != nullptr);
    if (s->length() < len)
    {
        s->insert(s->end(), len - s->length(), ' ');
    }
}

void WideStringToQuotedStringJson(FILE *outputFile, const wchar_t* s)
 {
    assert(outputFile != nullptr);
    if (s != nullptr)
    {
        OutputStringJson(outputFile, "\"");
        fprintf(outputFile, "%ls", s);
        OutputStringJson(outputFile, "\"");
    }
    else
    {
        OutputStringJson(outputFile, "NULL");
    }
}


template <typename T>
void ArrayToStringJson(FILE*                        outputFile,
                   int                              indent,
                   const int                        pointer_count,
                   const char*                      full_type_name,
                   const T*                         array,
                   const char*                      array_name,
                   const size_t                     array_length,
                   const ScalarValueToStringStruct& vinfo)
{
    assert(outputFile != nullptr);
    assert((vinfo.is_handle_or_addr + vinfo.is_enum  + vinfo.is_flags) <= 1);
    assert(vinfo.is_enum ? vinfo.enum_to_string_func != nullptr : true);
    assert(vinfo.is_flags ? vinfo.enum_to_string_func != nullptr : true);
    if (array_length == 0 || array == nullptr)
    {
        OutputStringJson(outputFile, " [ ]\n");
        return;
    }
    if ((pointer_count > 2 && strstr(full_type_name, "char")) || (pointer_count > 1 && !strstr(full_type_name, "char")))
    {
        fprintf(stderr, "Error in ArrayToStringJson: arrays of arrays not implemented\n");
        return;
    }

    if (pointer_count <= 1 &&
        (std::is_same<T, const char>::value || std::is_same<T, const char>::value || std::is_same<T, char>::value ||
         std::is_same<T, const char*>::value || std::is_same<T, char*>::value))
    {
        StringToQuotedStringJson(outputFile, reinterpret_cast<const char*>(array));
    }
    else
    {
        std::string full_type_name_str = full_type_name;
        //TODO: Check this, shouldn't we check the last char of string?
        //TODO: Also - might be a bug in the ascii dump version of this code.
        if (*full_type_name_str.rbegin() == '*')
        {
            full_type_name_str.pop_back();
        }
        OutputStringJson(outputFile, "\n");
        IndentSpacesJson(outputFile, indent);
        OutputStringJson(outputFile, "[\n");
        for (uint64_t j = 0; j < array_length; j++)
        {
            indent++;
            IndentSpacesJson(outputFile, indent);
            OutputStringJson(outputFile, "{\n");
            indent++;
            IndentSpacesJson(outputFile, indent);
            OutputStringJson(outputFile, "\"type\" : \"");
            OutputStringJson(outputFile, full_type_name_str);
            OutputStringJson(outputFile, "\",\n");
            IndentSpacesJson(outputFile, indent);
            OutputStringJson(outputFile, "\"name\" : \"[");
            UnsignedDecimalToStringJson(outputFile, j);
            OutputStringJson(outputFile, "]\",\n");
            IndentSpacesJson(outputFile, indent);
            OutputStringJson(outputFile, "\"address\" : \"");
            AddrToStringJson(outputFile, array->GetAddress() + j * sizeof(T));
            OutputStringJson(outputFile, "\",\n");
            IndentSpacesJson(outputFile, indent);
            OutputStringJson(outputFile, "\"value\" : ");
            if (strstr(full_type_name, "char"))
            {
                StringToQuotedStringJson(
                    outputFile,
                    ((reinterpret_cast<const BasicStringArrayDecoder<char, format::PointerAttributes::kIsString>*>(
                          array))
                         ->GetPointer())[j]);
                OutputStringJson(outputFile, "\n");
            }
            else
            {
                OutputStringJson(outputFile, "\"");
                if (vinfo.is_handle_or_addr)
                {
                    ScalarValueToStringJson(outputFile, array->GetPointer() + j, vinfo);
                }
                else
                {
                    ScalarValueToStringJson(outputFile, array->GetPointer() + j, vinfo);
                }
                OutputStringJson(outputFile, "\"\n");
            }
            indent--;
            IndentSpacesJson(outputFile, indent);
            if (j < array_length - 1)
            {
                OutputStringJson(outputFile, "},\n");
            }
            else
            {
                OutputStringJson(outputFile, "}\n");
            }
            indent--;
        }
        IndentSpacesJson(outputFile, indent);
        OutputStringJson(outputFile, "]\n");
    }
}

template <typename T>
void ArrayOfScalarsToStringJson(FILE*                        outputFile,
                                int                              indent,
                                const int                        pointer_count,
                                const char*                      full_type_name,
                                const T*                         array,
                                const char*                      array_name,
                                const size_t                     array_length,
                                const ScalarValueToStringStruct& vinfo)
{
    assert(outputFile != nullptr);
    assert((vinfo.is_handle_or_addr + vinfo.is_enum + vinfo.is_flags) <= 1);
    assert(vinfo.is_enum ? vinfo.enum_to_string_func != nullptr : true);
    assert(vinfo.is_flags ? vinfo.enum_to_string_func != nullptr : true);
    if ((pointer_count > 2 && strstr(full_type_name, "char")) || (pointer_count > 1 && !strstr(full_type_name, "char")))
    {
        fprintf(stderr, "Error in ArrayOfScalersToStringJson: arrays of arrays not implemented\n");
        return;
    }

    if (pointer_count <= 1 &&
        (std::is_same<T, const char>::value || std::is_same<T, const char>::value || std::is_same<T, char>::value ||
         std::is_same<T, const char*>::value || std::is_same<T, char*>::value))
    {
        StringToQuotedStringJson(outputFile, reinterpret_cast<const char*>(array));
        return;
    }

    std::string full_type_name_str = full_type_name;
    if (array_length == 0 || array == nullptr)
    {
        OutputStringJson(outputFile, " \"[]\n");
        return;
    }

    OutputStringJson(outputFile, "\n");
    IndentSpacesJson(outputFile, indent);
    OutputStringJson(outputFile, "[\n");

    if (*full_type_name_str.rbegin() == '*')
    {
        full_type_name_str.pop_back();
    }

    for (uint64_t j = 0; j < array_length; j++)
    {
        indent++;
        IndentSpacesJson(outputFile, indent);
        OutputStringJson(outputFile, "{\n");
        indent++;
        IndentSpacesJson(outputFile, indent);
        OutputStringJson(outputFile, "\"type\" : \"" + full_type_name_str + "\",\n");
        IndentSpacesJson(outputFile, indent);
        OutputStringJson(outputFile, "\"name\" : \"[");
        std::string idx_str;
        UnsignedDecimalToStringJson(outputFile, j);
        OutputStringJson(outputFile, "]\",\n");
        IndentSpacesJson(outputFile, indent);
        OutputStringJson(outputFile, "\"value\" : ");
        if (strstr(full_type_name, "char"))
        {
            StringToQuotedStringJson(
                outputFile,
                ((reinterpret_cast<const BasicStringArrayDecoder<char, format::PointerAttributes::kIsString>*>(
                      array))
                     ->GetPointer())[j]);
        }
        else
        {
            OutputStringJson(outputFile, "\"");
            ScalarValueToStringJson<T>(outputFile, &array[j], vinfo);
            OutputStringJson(outputFile, "\"\n");
        }
        indent--;
        IndentSpacesJson(outputFile, indent);
        OutputStringJson(outputFile, "}");
        if (j < array_length - 1)
        {
            OutputStringJson(outputFile, ",");
        }
        OutputStringJson(outputFile, "\n");
        indent--;
    }
    IndentSpacesJson(outputFile, indent);
    OutputStringJson(outputFile, "]\n");
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
