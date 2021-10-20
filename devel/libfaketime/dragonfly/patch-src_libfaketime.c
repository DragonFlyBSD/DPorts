--- src/libfaketime.c.intermediate	2019-05-27 19:15:24 UTC
+++ src/libfaketime.c
@@ -69,7 +69,7 @@
 extern char *__progname;
 #ifdef __sun
 #include "sunos_endian.h"
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <endian.h>
@@ -105,6 +105,10 @@ typedef int clockid_t;
 #define CLOCK_MONOTONIC_RAW (CLOCK_MONOTONIC + 1)
 #endif
 
+#ifdef __DragonFly__
+#define stat64 stat
+#endif
+
 /*
  * Per thread variable, which we turn on inside real_* calls to avoid modifying
  * time multiple times of for the whole process to prevent faking time
