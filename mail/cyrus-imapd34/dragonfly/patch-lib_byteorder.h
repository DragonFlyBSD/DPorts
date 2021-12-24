--- lib/byteorder.h.orig	2021-09-01 02:48:23 UTC
+++ lib/byteorder.h
@@ -47,7 +47,7 @@
 
 /* http://stackoverflow.com/a/4410728/94253 */
 
-#if defined(__linux__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #  include <endian.h>
 #elif defined(__FreeBSD__) || defined(__NetBSD__)
 #  include <sys/endian.h>
