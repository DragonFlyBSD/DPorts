--- src/tools/singlejar/zip_headers.h.orig	1979-12-31 23:00:00 UTC
+++ src/tools/singlejar/zip_headers.h
@@ -27,7 +27,7 @@
 
 #if defined(__linux__)
 #include <endian.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #elif defined(__APPLE__)
 // Hopefully OSX will keep running solely on little endian CPUs, so:
