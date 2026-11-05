--- src/main/cpp/util/md5.h.orig
+++ src/main/cpp/util/md5.h
@@ -26,7 +26,7 @@
 
 #if defined(__linux__)
 #include <endian.h>
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #elif defined(__APPLE__) || defined(_WIN32)
 // Hopefully OSX and Windows will keep running solely on little endian CPUs, so:
