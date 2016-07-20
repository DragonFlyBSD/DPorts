--- lib/ext2fs/tdb.c.orig	2016-06-07 08:01:19.000000000 +0300
+++ lib/ext2fs/tdb.c
@@ -36,7 +36,7 @@ Last Changed Date: 2007-06-22 13:36:10 -
 #define HAVE_UTIME_H
 #define HAVE_UTIME
 #endif
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #define _XOPEN_SOURCE 600
 #endif
 
