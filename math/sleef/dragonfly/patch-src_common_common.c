--- src/common/common.c.orig	2020-09-01 01:51:12 UTC
+++ src/common/common.c
@@ -35,7 +35,7 @@ EXPORT uint64_t Sleef_currentTimeMicros(
 #else // #if defined(__MINGW32__) || defined(__MINGW64__) || defined(_MSC_VER)
 #include <time.h>
 #include <unistd.h>
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #else
 #include <malloc.h>
