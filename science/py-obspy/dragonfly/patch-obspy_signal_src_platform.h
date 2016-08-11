--- obspy/signal/src/platform.h.orig	2016-03-01 12:03:06.000000000 +0200
+++ obspy/signal/src/platform.h
@@ -8,7 +8,7 @@ extern "C" {
 #if defined(__linux__) || defined(__linux)
   #include <values.h>
   #include <malloc.h>
-#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
   #include <limits.h>
   #include <sys/malloc.h>
 #elif defined(_WIN32) || defined(_WIN64)
