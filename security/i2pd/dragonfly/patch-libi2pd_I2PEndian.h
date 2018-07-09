--- libi2pd/I2PEndian.h.orig	2018-06-26 17:46:01 UTC
+++ libi2pd/I2PEndian.h
@@ -3,7 +3,7 @@
 #include <inttypes.h>
 #include <string.h>
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #elif defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__) || defined(__GLIBC__)
 #include <endian.h>
