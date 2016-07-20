--- lib/ext2fs/unix_io.c.orig	2016-06-09 00:39:43.000000000 +0300
+++ lib/ext2fs/unix_io.c
@@ -15,7 +15,7 @@
  * %End-Header%
  */
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
 #define _XOPEN_SOURCE 600
 #define _DARWIN_C_SOURCE
 #define _FILE_OFFSET_BITS 64
@@ -573,7 +573,7 @@ static errcode_t unix_open(const char *n
 	}
 #endif
 
-#if defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 	/*
 	 * Some operating systems require that the buffers be aligned,
 	 * regardless of O_DIRECT
