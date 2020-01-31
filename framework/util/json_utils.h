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

typedef std::function<void(std::string *, uint32_t)> EnumToStringFuncPtr;

typedef struct ScalarValueToStringStruct {
   bool is_handle_or_addr;
   bool is_enum;
   bool is_flags;
   EnumToStringFuncPtr enum_to_string_func;
} ScalarValueToStringStruct;

void SignedDecimalToStringJson(std::string* out, int64_t n)
{
    char tmp[30];
    assert(out != nullptr);
    snprintf(tmp, sizeof(tmp), "%" PRId64, n);
    snprintf(tmp, sizeof(tmp), "%" PRId64, n);
    *out += tmp;
}

void UnsignedDecimalToStringJson(std::string* out, uint64_t n)
{
    char tmp[30];
    assert(out != nullptr);
    snprintf(tmp, sizeof(tmp), "%" PRIu64, n);
    *out += tmp;
}

void DoubleToStringJson(std::string* out, double d)
{
    char tmp[30];
    snprintf(tmp, sizeof(tmp), "%g", d);
    *out += tmp;
}

void AddrToStringJson(std::string* out, uint64_t a)
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

void IndentSpacesJson(std::string* out, int indent)
{
    assert(out != nullptr);
    out->insert(out->end(), indent * kIndentSize, ' ');
}

void FlagsToStringJson(std::string* out, VkFlags flags, EnumToStringFuncPtr enum_to_string_func)
{
    VkFlags m = 1;
    assert(out != nullptr);
    UnsignedDecimalToStringJson(out, flags);
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
void ScalarValueToStringJson(std::string* out, const T* value, const ScalarValueToStringStruct& vinfo)
{
    assert(out != nullptr);
    assert((vinfo.is_handle_or_addr + vinfo.is_enum  + vinfo.is_flags) <= 1);
    assert(vinfo.is_enum ? vinfo.enum_to_string_func != nullptr : true);
    assert(vinfo.is_flags ? vinfo.enum_to_string_func != nullptr : true);
    if (vinfo.is_handle_or_addr)
    {
        AddrToStringJson(out, *(reinterpret_cast<const uint64_t*>(value)));
    }
    else if (vinfo.is_flags)
    {
        FlagsToStringJson(out, *(reinterpret_cast<const uint32_t*>(value)), vinfo.enum_to_string_func);
    }
    else if (vinfo.is_enum)
    {
        vinfo.enum_to_string_func(out, *(reinterpret_cast<const uint32_t*>(value)));
    }
    else if (std::is_same<T, float>::value)
    {
        DoubleToStringJson(out, *(reinterpret_cast<const float*>(value)));
    }
    else if (std::is_same<T, double>::value)
    {
        DoubleToStringJson(out, *(reinterpret_cast<const double*>(value))); //??
    }
    else if (std::is_same<T, int32_t>::value)
    {
        SignedDecimalToStringJson(out, *(reinterpret_cast<const int32_t*>(value)));
    }
    else if (std::is_same<T, uint32_t>::value)
    {
        UnsignedDecimalToStringJson(out, *(reinterpret_cast<const uint32_t*>(value)));
    }
    else if (std::is_same<T, int64_t>::value)
    {
        SignedDecimalToStringJson(out, *(reinterpret_cast<const int64_t*>(value)));
    }
    else if (std::is_same<T, unsigned int>::value)
    {
        UnsignedDecimalToStringJson(out, *(reinterpret_cast<const int*>(value)));
    }
    else if (std::is_same<T, unsigned char>::value)
    {
        UnsignedDecimalToStringJson(out, *(reinterpret_cast<const unsigned char*>(value)));
    }
    else
    {
        UnsignedDecimalToStringJson(out, *(reinterpret_cast<const uint64_t*>(value)));
    }
}

void StringToQuotedStringJson(std::string* out, const char* s)
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

void PadStringJson(std::string* s, size_t len)
{
    assert(s != nullptr);
    if (s->length() < len)
    {
        s->insert(s->end(), len - s->length(), ' ');
    }
}

template <typename T>
void ArrayToStringJson(std::string*                 out,
                   int                              indent,
                   const int                        pointer_count,
                   const char*                      full_type_name,
                   const T*                         array,
                   const char*                      array_name,
                   const size_t                     array_length,
                   const ScalarValueToStringStruct& vinfo)
{
    assert(out != nullptr);
    assert((vinfo.is_handle_or_addr + vinfo.is_enum  + vinfo.is_flags) <= 1);
    assert(vinfo.is_enum ? vinfo.enum_to_string_func != nullptr : true);
    assert(vinfo.is_flags ? vinfo.enum_to_string_func != nullptr : true);
    if (array_length == 0 || array == nullptr)
    {
        *out += " [ ]\n";
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
        StringToQuotedStringJson(out, reinterpret_cast<const char*>(array));
    }
    else
    {
        std::string full_type_name_str = full_type_name;
        //@@ Check this, shouldn't we check the last char of string?
        //@@ Also - might be a bug in the ascii dump version of this code.
        if (*full_type_name_str.rbegin() == '*')
        {
            full_type_name_str.pop_back();
        }
        *out += "\n";
        IndentSpacesJson(out, indent);
        *out += "[\n";
        for (uint64_t j = 0; j < array_length; j++)
        {
            indent++;
            IndentSpacesJson(out, indent);
            *out += "{\n";
            indent++;
            IndentSpacesJson(out, indent);
            *out += "\"type\" : \"";
            *out += full_type_name_str;
            *out += "\",\n";
            IndentSpacesJson(out, indent);
            *out += "\"name\" : \"[";
            std::string idx_str;
            UnsignedDecimalToStringJson(&idx_str, j);
            *out += idx_str;
            *out += "]\",\n";
            IndentSpacesJson(out, indent);
            *out += "\"address\" : \"";
            AddrToStringJson(out, array->GetAddress() + j * sizeof(T));
            *out += "\",\n";
            IndentSpacesJson(out, indent);
            *out += "\"value\" : ";
            if (strstr(full_type_name, "char"))
            {
                StringToQuotedStringJson(
                    out,
                    ((reinterpret_cast<const BasicStringArrayDecoder<char, format::PointerAttributes::kIsString>*>(
                          array))
                         ->GetPointer())[j]);
                *out += "\n";
            }
            else
            {
                *out += "\"";
                if (vinfo.is_handle_or_addr)
                {
                    ScalarValueToStringJson(out, array->GetPointer() + j, vinfo);
                }
                else
                {
                    ScalarValueToStringJson(out, array->GetPointer() + j, vinfo);
                }
                *out += "\"\n";
            }
            indent--;
            IndentSpacesJson(out, indent);
            if (j < array_length - 1)
            {
                *out += "},\n";
            }
            else
            {
                *out += "}\n";
            }
            indent--;
        }
        IndentSpacesJson(out, indent);
        *out += "]\n";
    }
}

template <typename T>
void ArrayOfScalarsToStringJson(std::string*                     out,
                            int                              indent,
                            const int                        pointer_count,
                            const char*                      full_type_name,
                            const T*                         array,
                            const char*                      array_name,
                            const size_t                     array_length,
                            const ScalarValueToStringStruct& vinfo)
{
    assert(out != nullptr);
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
        StringToQuotedStringJson(out, reinterpret_cast<const char*>(array));
        return;
    }

    std::string full_type_name_str = full_type_name;
    if (array_length == 0 || array == nullptr)
    {
        *out += " \"[]\n";
        return;
    }

    *out += "\n";
    IndentSpacesJson(out, indent);
    *out += "[\n";

    if (*full_type_name_str.rbegin() == '*')
    {
        full_type_name_str.pop_back();
    }

    for (uint64_t j = 0; j < array_length; j++)
    {
        indent++;
        IndentSpacesJson(out, indent);
        *out += "{\n";
        indent++;
        IndentSpacesJson(out, indent);
        *out += "\"type\" : \"" + full_type_name_str + "\",\n";
        IndentSpacesJson(out, indent);
        *out += "\"name\" : \"[";
        std::string idx_str;
        UnsignedDecimalToStringJson(&idx_str, j);
        *out += idx_str;
        *out += "]\",\n";
        IndentSpacesJson(out, indent);
        *out += "\"value\" : ";
        if (strstr(full_type_name, "char"))
        {
            StringToQuotedStringJson(
                out,
                ((reinterpret_cast<const BasicStringArrayDecoder<char, format::PointerAttributes::kIsString>*>(
                      array))
                     ->GetPointer())[j]);
        }
        else
        {
            *out += "\"";
            ScalarValueToStringJson<T>(out, &array[j], vinfo);
            *out += "\"\n";
        }
        indent--;
        IndentSpacesJson(out, indent);
        *out += "}";
        if (j < array_length - 1)
        {
            *out += ",";
        }
        *out += "\n";
        indent--;
    }
    IndentSpacesJson(out, indent);
    *out += "]\n";
}

template <typename T>
void ArrayOfStructsToStringJson(std::string* out,
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
    if (pointer_count > 1)
    {
        fprintf(stderr, "ERROR: ArrayOfStructsToStringJson cannot handle arrays of arrays\n");
        return;
    }
    if (array_length == 0 || array == nullptr)
    {
        *out += "[ ]\n";
        return;
    }
    *out += "\n";
    IndentSpacesJson(out, indent);
    *out += "[\n";
    for (uint64_t j = 0; j < array_length; j++)
    {
        indent++;
        IndentSpacesJson(out, indent);
        *out += "{\n";
        indent++;
        IndentSpacesJson(out, indent);
        *out += "\"type\" : \"";
        *out += base_type_name;                  // TODO: @@ Is this the correct type??
        *out += (is_union ? " (Union)\",\n" : "\",\n");
        IndentSpacesJson(out, indent);
        *out += "\"name\" : \"[";
        std::string idx_str;
        UnsignedDecimalToStringJson(&idx_str, j);
        *out += idx_str;
        *out += "]\",\n";
        IndentSpacesJson(out, indent);
        *out += "\"address\" : \"";
        AddrToStringJson(out, base_addr + j * sizeof(T));
        gfxrecon::decode::Decoded_VkWriteDescriptorSet* p = NULL;
        *out += "\",\n";
        IndentSpacesJson(out, indent);
        *out += "\"members\" :\n";
        StructureToStringJson(out, array[j], indent, base_addr + j * sizeof(T)); // YGS
        indent--;
        IndentSpacesJson(out, indent);
        *out += "}";
        if (j < array_length - 1)
        {
            *out += ",";
        }
        *out += "\n";
        indent--;
    }
    IndentSpacesJson(out, indent);
    *out += "]\n";
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
