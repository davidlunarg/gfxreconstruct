cmake_minimum_required(VERSION 3.0)
project(brimstone)

# For vk_mem_alloc.h
include_directories(${CMAKE_SOURCE_DIR}/external/VulkanMemoryAllocator ${CMAKE_SOURCE_DIR})

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(util)
add_subdirectory(format)
add_subdirectory(generated)
add_subdirectory(layer)
add_subdirectory(application)
