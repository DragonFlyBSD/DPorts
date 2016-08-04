--- src/nanotimer.c.orig	2014-09-28 16:28:24.000000000 +0300
+++ src/nanotimer.c
@@ -15,7 +15,7 @@ typedef uint64_t nanotime_t;
 #include "nanotimer_windows.h"
 #elif defined(__MACH__) || defined(__APPLE__)
 #include "nanotimer_macosx.h"
-#elif defined(linux) || defined(__linux) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(linux) || defined(__linux) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include "nanotimer_gettime.h"
 #elif defined(sun) || defined(__sun) || defined(_AIX)
 #include "nanotimer_rtposix.h"
