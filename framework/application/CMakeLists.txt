add_library(gfxrecon_application STATIC "")

target_sources(gfxrecon_application
               PRIVATE
                    application.h
                    application.cpp
                    $<$<BOOL:${XCB_FOUND}>:xcb_application.h xcb_window.h xcb_application.cpp xcb_window.cpp>
                    $<$<BOOL:${WAYLAND_FOUND}>:wayland_application.h wayland_window.h wayland_application.cpp wayland_window.cpp>
                    $<$<BOOL:${WIN32}>:win32_application.h win32_window.h win32_application.cpp win32_window.cpp>
              )

target_include_directories(gfxrecon_application
                           PUBLIC
                               $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}>)

target_link_libraries(gfxrecon_application
                      gfxrecon_decode
                      gfxrecon_format
                      gfxrecon_util
                      volk
                      vulkan_registry
                      platform_specific
                      $<$<BOOL:${XCB_FOUND}>:${XCB_LIBRARY}>
                      $<$<BOOL:${WAYLAND_FOUND}>:${WAYLAND_LIBRARY}>
                     )
