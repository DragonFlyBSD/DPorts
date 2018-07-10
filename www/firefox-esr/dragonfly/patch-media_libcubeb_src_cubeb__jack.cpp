--- media/libcubeb/src/cubeb_jack.cpp.intermediate	2017-10-06 16:40:09 UTC
+++ media/libcubeb/src/cubeb_jack.cpp
@@ -8,9 +8,6 @@
  */
 #define _DEFAULT_SOURCE
 #define _BSD_SOURCE
-#ifndef __FreeBSD__
-#define _POSIX_SOURCE
-#endif
 #include <dlfcn.h>
 #include <stdio.h>
 #include <string.h>
