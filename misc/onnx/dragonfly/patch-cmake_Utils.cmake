--- cmake/Utils.cmake.orig	2026-06-15 11:54:54 UTC
+++ cmake/Utils.cmake
@@ -198,8 +198,11 @@ function(add_onnx_compile_options target)
     endif()
   endforeach()
   # Prevent "undefined symbol: _ZNSt10filesystem7__cxx114path14_M_split_cmptsEv"
-  # (std::filesystem::__cxx11::path::_M_split_cmpts()) on gcc 8
-  if(CMAKE_COMPILER_IS_GNUCXX AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 9.0)
+  # (std::filesystem::__cxx11::path::_M_split_cmpts()) on gcc 8.
+  # DragonFly has no separate libstdc++fs; filesystem support (if
+  # needed) is already in the normal C++ runtime, and passing
+  # -lstdc++fs breaks the link with "cannot find -lstdc++fs".
+  if(CMAKE_COMPILER_IS_GNUCXX AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 9.0 AND NOT CMAKE_SYSTEM_NAME STREQUAL "DragonFly")
     target_link_libraries(${target} PRIVATE "-lstdc++fs")
   endif()
 
