--- lib/blkid/getsize.c.orig	2015-01-19 14:43:35 UTC
+++ lib/blkid/getsize.c
@@ -42,6 +42,9 @@
 #include <sys/stat.h>
 #endif
 
+#ifdef __DragonFly__
+#include <sys/diskslice.h>
+#endif
 
 #if defined(__linux__) && defined(_IO) && !defined(BLKGETSIZE)
 #define BLKGETSIZE _IO(0x12,96)	/* return device size */
@@ -119,6 +122,13 @@ blkid_loff_t blkid_get_dev_size(int fd)
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
@@ -127,7 +137,7 @@ blkid_loff_t blkid_get_dev_size(int fd)
 			return (blkid_loff_t)this_floppy.size << 9;
 	}
 #endif
-#if defined(HAVE_SYS_DISKLABEL_H) && defined(DIOCGDINFO)
+#if defined(HAVE_SYS_DISKLABEL_H) && defined(DIOCGDINFO) && !defined(__DragonFly__)
 	{
 		int part = -1;
 		struct disklabel lab;
