--- src/macros.c.orig	2018-12-04 09:19:01 UTC
+++ src/macros.c
@@ -13,7 +13,7 @@ the terms of the GNU LGPL.
  * platform independent way. Stolen from fuse_misc.h.
  */
 
-#if PLATFORM == PLATFORM_LINUX
+#if PLATFORM == PLATFORM_LINUX || defined(__DragonFly__)
 #define GET_ATIME_NS(stbuf) ((stbuf)->st_atim.tv_nsec)
 #define GET_CTIME_NS(stbuf) ((stbuf)->st_ctim.tv_nsec)
 #define GET_MTIME_NS(stbuf) ((stbuf)->st_mtim.tv_nsec)
