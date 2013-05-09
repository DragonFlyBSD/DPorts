--- ./lib/blkid/getsize.c.orig	2012-11-30 02:40:18.000000000 +0000
+++ ./lib/blkid/getsize.c
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
@@ -134,8 +137,13 @@ blkid_loff_t blkid_get_dev_size(int fd)
 #ifdef HAVE_SYS_DISKLABEL_H
 	{
 		int part = -1;
+#ifdef __DragonFly__
+                struct disklabel32 lab;
+                struct partition32 *pp;
+#else
 		struct disklabel lab;
 		struct partition *pp;
+#endif
 		char ch;
 		struct stat st;
 
@@ -152,7 +160,11 @@ blkid_loff_t blkid_get_dev_size(int fd)
 		    (S_ISBLK(st.st_mode) || S_ISCHR(st.st_mode)))
 			part = st.st_rdev & 7;
 
+#ifdef __DragonFly__
+		if (part >= 0 && (ioctl(fd, DIOCGDINFO32, (char *)&lab) >= 0)) {
+#else
 		if (part >= 0 && (ioctl(fd, DIOCGDINFO, (char *)&lab) >= 0)) {
+#endif
 			pp = &lab.d_partitions[part];
 			if (pp->p_size)
 				return pp->p_size << 9;
