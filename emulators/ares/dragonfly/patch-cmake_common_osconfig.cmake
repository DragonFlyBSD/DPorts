--- cmake/common/osconfig.cmake.orig
+++ cmake/common/osconfig.cmake
@@ -16,9 +16,13 @@
     endif()
   endif()
   set(OS_MACOS TRUE)
-elseif(CMAKE_HOST_SYSTEM_NAME MATCHES "Linux|FreeBSD|OpenBSD")
+elseif(CMAKE_HOST_SYSTEM_NAME MATCHES "Linux|FreeBSD|DragonFly|OpenBSD")
   set(CMAKE_CXX_EXTENSIONS FALSE)
   list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/linux")
   string(TOUPPER "${CMAKE_HOST_SYSTEM_NAME}" _SYSTEM_NAME_U)
   set(OS_${_SYSTEM_NAME_U} TRUE)
+  # DragonFly takes the FreeBSD paths
+  if(OS_DRAGONFLY)
+    set(OS_FREEBSD TRUE)
+  endif()
 endif()
