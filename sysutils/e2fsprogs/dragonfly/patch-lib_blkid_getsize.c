--- ./lib/blkid/getsize.c.orig	2012-08-15 05:24:21.000000000 +0200
+++ ./lib/blkid/getsize.c	2012-12-31 20:22:06.662385000 +0100
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
@@ -87,8 +90,13 @@
 #endif
 #ifdef HAVE_SYS_DISKLABEL_H
 	int part = -1;
+#ifdef __DragonFly__
+	struct disklabel32 lab;
+	struct partition32 *pp;
+#else
 	struct disklabel lab;
 	struct partition *pp;
+#endif
 	char ch;
 	struct stat st;
 #endif /* HAVE_SYS_DISKLABEL_H */
@@ -146,7 +154,11 @@
 	if (fstat(fd, &st) >= 0 && (S_ISBLK(st.st_mode) || S_ISCHR(st.st_mode)))
 		part = st.st_rdev & 7;
 
+#ifdef __DragonFly__
+	if (part >= 0 && (ioctl(fd, DIOCGDINFO32, (char *)&lab) >= 0)) {
+#else
 	if (part >= 0 && (ioctl(fd, DIOCGDINFO, (char *)&lab) >= 0)) {
+#endif
 		pp = &lab.d_partitions[part];
 		if (pp->p_size)
 			return pp->p_size << 9;
