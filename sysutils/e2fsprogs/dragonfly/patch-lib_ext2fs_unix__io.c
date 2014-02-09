--- ./lib/ext2fs/unix_io.c.orig	2013-09-09 14:29:01.000000000 +0000
+++ ./lib/ext2fs/unix_io.c
@@ -558,7 +558,7 @@ static errcode_t unix_open(const char *n
 	}
 #endif
 
-#if defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly)
 	/*
 	 * Some operating systems require that the buffers be aligned,
 	 * regardless of O_DIRECT
