--- src/include/ndpi_define.h.orig	2016-06-27 12:19:47.000000000 +0300
+++ src/include/ndpi_define.h
@@ -27,7 +27,7 @@
   gcc -E -dM - < /dev/null |grep ENDIAN
 */
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <machine/endian.h>
 #endif
 
