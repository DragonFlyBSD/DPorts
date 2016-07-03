--- I2PEndian.h.orig	2016-05-18 16:22:48.000000000 +0300
+++ I2PEndian.h
@@ -5,7 +5,7 @@
 
 #if defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__)
 #include <endian.h>
-#elif __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #elif defined(__APPLE__) && defined(__MACH__)
 
