--- lib/fuse_session.c.orig	2019-01-04 13:38:34 UTC
+++ lib/fuse_session.c
@@ -235,6 +235,6 @@ void fuse_chan_destroy(struct fuse_chan
 	free(ch);
 }
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 FUSE_SYMVER(".symver fuse_chan_new_compat24,fuse_chan_new@FUSE_2.4");
 #endif
