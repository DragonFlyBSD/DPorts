--- cmake/common/osconfig.cmake.orig	2026-11-05 07:27:38 UTC
+++ cmake/common/osconfig.cmake
@@ -12,7 +12,7 @@
   set(CMAKE_CXX_EXTENSIONS FALSE)
   list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/macos")
   set(OS_MACOS TRUE)
-elseif(CMAKE_HOST_SYSTEM_NAME MATCHES "Linux|FreeBSD|OpenBSD")
+elseif(CMAKE_HOST_SYSTEM_NAME MATCHES "Linux|FreeBSD|OpenBSD|DragonFly")
   set(CMAKE_CXX_EXTENSIONS FALSE)
   list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/linux")
   string(TOUPPER "${CMAKE_HOST_SYSTEM_NAME}" _SYSTEM_NAME_U)
