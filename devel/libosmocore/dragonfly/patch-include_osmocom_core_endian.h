--- include/osmocom/core/endian.h.orig	2015-08-23 18:39:14.000000000 +0300
+++ include/osmocom/core/endian.h
@@ -12,7 +12,7 @@
  *
  */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
         #if BYTE_ORDER == LITTLE_ENDIAN
                 #define OSMO_IS_LITTLE_ENDIAN           1
