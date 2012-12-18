--- util.h.orig	2007-12-27 01:51:05.000000000 +0100
+++ util.h	2012-12-18 16:26:03.057733000 +0100
@@ -19,7 +19,7 @@
 #  include <config.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 
 #define __BYTE_ORDER            _BYTE_ORDER
