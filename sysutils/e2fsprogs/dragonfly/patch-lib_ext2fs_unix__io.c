--- lib/ext2fs/unix_io.c.orig	2017-01-31 06:08:02 UTC
+++ lib/ext2fs/unix_io.c
@@ -15,7 +15,7 @@
  * %End-Header%
  */
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
 #define _XOPEN_SOURCE 600
 #define _DARWIN_C_SOURCE
 #define _FILE_OFFSET_BITS 64
@@ -632,7 +632,7 @@ static errcode_t unix_open_channel(const
 		io->align = 512;
 #endif
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 	if (io->flags & CHANNEL_FLAGS_BLOCK_DEVICE) {
 		int dio_align = ext2fs_get_dio_alignment(fd);
 
