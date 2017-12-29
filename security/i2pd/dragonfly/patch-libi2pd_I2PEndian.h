--- libi2pd/I2PEndian.h.orig	2017-12-29 02:41:52 UTC
+++ libi2pd/I2PEndian.h
@@ -3,7 +3,7 @@
 #include <inttypes.h>
 #include <string.h>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #elif defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__)
 #include <endian.h>
