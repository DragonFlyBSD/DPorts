--- src/tools/singlejar/zip_headers.h.orig	Tue Jan  1 00:00:00 1980
+++ src/tools/singlejar/zip_headers.h	Tue Mar
@@ -27,7 +27,7 @@
 
 #if defined(__linux__)
 #include <endian.h>
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #elif defined(__APPLE__) || defined(_WIN32)
 // Hopefully OSX and Windows will keep running solely on little endian CPUs, so:
