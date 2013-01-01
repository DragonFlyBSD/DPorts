--- ./lib/ext2fs/getsize.c.orig	2012-12-31 20:15:54.041865000 +0100
+++ ./lib/ext2fs/getsize.c	2012-12-31 20:18:48.742109000 +0100
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
@@ -155,7 +158,11 @@
 #endif
 #ifdef HAVE_SYS_DISKLABEL_H
 	int part;
+#ifdef __DragonFly__
+        struct disklabel32 lab;
+#else
 	struct disklabel lab;
+#endif
 	struct partition *pp;
 	char ch;
 #endif /* HAVE_SYS_DISKLABEL_H */
