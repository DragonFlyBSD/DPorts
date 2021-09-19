--- media/libcubeb/src/cubeb_jack.cpp.orig	2021-09-04 13:25:34 UTC
+++ media/libcubeb/src/cubeb_jack.cpp
@@ -8,9 +8,6 @@
  */
 #define _DEFAULT_SOURCE
 #define _BSD_SOURCE
-#ifndef __FreeBSD__
-#define _POSIX_SOURCE
-#endif
 #include "cubeb-internal.h"
 #include "cubeb/cubeb.h"
 #include "cubeb_resampler.h"
