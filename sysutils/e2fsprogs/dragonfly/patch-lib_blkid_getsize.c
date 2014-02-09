--- ./lib/blkid/getsize.c.orig	2013-12-16 06:32:00.000000000 +0000
+++ ./lib/blkid/getsize.c
@@ -46,6 +46,9 @@
 #include <sys/stat.h>
 #endif
 
+#ifdef __DragonFly__
+#include <sys/diskslice.h>
+#endif
 
 #if defined(__linux__) && defined(_IO) && !defined(BLKGETSIZE)
 #define BLKGETSIZE _IO(0x12,96)	/* return device size */
@@ -123,6 +126,13 @@ blkid_loff_t blkid_get_dev_size(int fd)
 		return (off_t)size64;
 #endif /* DIOCGMEDIASIZE */
 
+/* tested on DragonFly 3.1-DEVELOPMENT i386/X86_64 */
+#if defined(__DragonFly__) && defined (DIOCGPART)
+        struct partinfo dp;
+        if (ioctl(fd, DIOCGPART, &dp) >= 0)
+                return (off_t)dp.media_size;
+#endif /* __DragonFly__ */
+
 #ifdef FDGETPRM
 	{
 		struct floppy_struct this_floppy;
@@ -131,7 +141,7 @@ blkid_loff_t blkid_get_dev_size(int fd)
 			return (blkid_loff_t)this_floppy.size << 9;
 	}
 #endif
-#ifdef HAVE_SYS_DISKLABEL_H
+#if defined(HAVE_SYS_DISKLABEL_H) && !defined(__DragonFly__)
 	{
 		int part = -1;
 		struct disklabel lab;
