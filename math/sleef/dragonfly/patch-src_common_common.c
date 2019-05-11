--- src/common/common.c.orig	2019-04-28 03:33:44 UTC
+++ src/common/common.c
@@ -35,7 +35,7 @@ EXPORT uint64_t Sleef_currentTimeMicros(
 #else // #if defined(__MINGW32__) || defined(__MINGW64__) || defined(_MSC_VER)
 #include <time.h>
 #include <unistd.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #else
 #include <malloc.h>
