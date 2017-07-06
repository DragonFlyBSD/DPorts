--- libi2pd/I2PEndian.h.orig	2017-06-01 14:05:20.000000000 +0000
+++ libi2pd/I2PEndian.h	2017-07-06 15:39:18.000000000 +0000
@@ -5,7 +5,7 @@
 
 #if defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__)
 #include <endian.h>
-#elif __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 #include <sys/endian.h>
 #elif defined(__APPLE__) && defined(__MACH__)
 
