--- tools/openmp/runtime/cmake/LibompMicroTests.cmake.orig	2016-12-08 11:22:24.000000000 +0200
+++ tools/openmp/runtime/cmake/LibompMicroTests.cmake
@@ -176,6 +176,9 @@ if(CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
 elseif(CMAKE_SYSTEM_NAME MATCHES "NetBSD")
   set(libomp_expected_library_deps libc.so.12 libpthread.so.1 libm.so.0)
   libomp_append(libomp_expected_library_deps libhwloc.so.5 LIBOMP_USE_HWLOC)
+elseif(CMAKE_SYSTEM_NAME MATCHES "DragonFly")
+  set(libomp_expected_library_deps libc.so.8 libpthread.so.0 libm.so.4)
+  libomp_append(libomp_expected_library_deps libhwloc.so.5 LIBOMP_USE_HWLOC)
 elseif(APPLE)
   set(libomp_expected_library_deps /usr/lib/libSystem.B.dylib)
 elseif(WIN32)
