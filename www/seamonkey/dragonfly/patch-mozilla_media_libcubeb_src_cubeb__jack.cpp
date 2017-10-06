--- mozilla/media/libcubeb/src/cubeb_jack.cpp.intermediate	2017-10-06 21:06:43 UTC
+++ mozilla/media/libcubeb/src/cubeb_jack.cpp
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
