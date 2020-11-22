--- dn_endian.h.orig	2008-08-20 13:10:23 UTC
+++ dn_endian.h
@@ -14,10 +14,12 @@
  */
 /* Header file to cope with endian issues */
 
-#if defined(__NetBSD__) || defined(__FreeBSD__)
+#if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <machine/endian.h>
+#ifndef __BYTE_ORDER
 #define __BYTE_ORDER BYTE_ORDER
 #endif
+#endif
 
 #ifdef __APPLE__
 #include <architecture/byte_order.h>
