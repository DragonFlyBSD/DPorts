--- reicast/cmake/config.cmake.orig
+++ reicast/cmake/config.cmake
@@ -168,7 +168,7 @@
 elseif(CMAKE_HOST_WIN32)
   set(HOST_OS ${OS_WINDOWS}) 
 
-elseif("freebsd" STREQUAL "${host_os}")
+elseif("freebsd" STREQUAL "${host_os}" OR "dragonfly" STREQUAL "${host_os}")
   set(HOST_OS ${OS_FREEBSD}) 
 
 elseif(CMAKE_HOST_APPLE)
