--- cmake/FindPkgConfig.cmake.orig	2019-04-08 20:35:29 UTC
+++ cmake/FindPkgConfig.cmake
@@ -362,7 +362,7 @@ macro(_pkg_check_modules_internal _is_re
           endif()
         endif()
       endif()
-      if(CMAKE_SYSTEM_NAME STREQUAL "FreeBSD" AND NOT CMAKE_CROSSCOMPILING)
+      if(CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly" AND NOT CMAKE_CROSSCOMPILING)
         list(APPEND _lib_dirs "libdata/pkgconfig")
       endif()
       list(APPEND _lib_dirs "lib/pkgconfig")
