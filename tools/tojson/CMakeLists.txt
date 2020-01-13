add_executable(gfxrecon-tojson "")

target_sources(gfxrecon-tojson
               PRIVATE
                   main.cpp
              )

target_include_directories(gfxrecon-tojson PUBLIC ${CMAKE_BINARY_DIR})

target_link_libraries(gfxrecon-tojson gfxrecon_decode gfxrecon_format gfxrecon_util platform_specific)

common_build_directives(gfxrecon-tojson)
