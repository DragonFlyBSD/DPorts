--- media/libcubeb/src/cubeb_jack.cpp.orig	2017-10-06 17:40:00 UTC
+++ media/libcubeb/src/cubeb_jack.cpp
@@ -8,9 +8,6 @@
  */
 #define _DEFAULT_SOURCE
 #define _BSD_SOURCE
-#ifndef __FreeBSD__
-#define _POSIX_SOURCE
-#endif
 #include <algorithm>
 #include <dlfcn.h>
 #include <limits>
