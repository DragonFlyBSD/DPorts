--- iputils.hh.orig	2016-07-29 17:35:46.000000000 +0300
+++ iputils.hh
@@ -79,7 +79,7 @@
 
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #endif
 
