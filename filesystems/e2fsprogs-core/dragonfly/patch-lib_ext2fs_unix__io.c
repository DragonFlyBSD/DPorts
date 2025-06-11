--- lib/ext2fs/unix_io.c.orig	Wed Jan  1 06:24:42 2025
+++ lib/ext2fs/unix_io.c	Tue Jun
@@ -15,7 +15,8 @@
  * %End-Header%
  */
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__) && \
+    !defined(__DragonFly__)
 #define _XOPEN_SOURCE 600
 #define _DARWIN_C_SOURCE
 #ifndef _LARGEFILE_SOURCE
