--- ./lib/ext2fs/getsize.c.orig	2012-11-30 02:40:18.000000000 +0000
+++ ./lib/ext2fs/getsize.c
@@ -33,6 +33,9 @@
 #ifdef HAVE_SYS_DISKLABEL_H
 #include <sys/disklabel.h>
 #endif
+#ifdef __DragonFly__
+#include <sys/disklabel32.h>
+#endif
 #ifdef HAVE_SYS_DISK_H
 #ifdef HAVE_SYS_QUEUE_H
 #include <sys/queue.h> /* for LIST_HEAD */
@@ -201,7 +204,11 @@ errcode_t ext2fs_get_device_size2(const
 #ifdef HAVE_SYS_DISKLABEL_H
 	{
 		int part;
+#ifdef __DragonFly__
+                struct disklabel32 lab;
+#else
 		struct disklabel lab;
+#endif
 		struct partition *pp;
 		char ch;
 
