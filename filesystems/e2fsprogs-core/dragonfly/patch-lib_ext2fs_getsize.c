--- ./lib/ext2fs/getsize.c.orig	2013-09-09 14:29:01.000000000 +0000
+++ ./lib/ext2fs/getsize.c
@@ -47,6 +47,10 @@
 #endif
 #include <ctype.h>
 
+#ifdef __DragonFly__
+#include <sys/diskslice.h>
+#endif
+
 #if defined(__linux__) && defined(_IO) && !defined(BLKGETSIZE)
 #define BLKGETSIZE _IO(0x12,96)	/* return device size */
 #endif
@@ -198,11 +202,13 @@ errcode_t ext2fs_get_device_size2(const
 	}
 #endif
 
-#ifdef HAVE_SYS_DISKLABEL_H
+#if defined(HAVE_SYS_DISKLABEL_H)
 	{
 		int part;
+#ifndef __DragonFly__
 		struct disklabel lab;
 		struct partition *pp;
+#endif
 		char ch;
 
 #if defined(DIOCGMEDIASIZE)
@@ -233,6 +239,15 @@ errcode_t ext2fs_get_device_size2(const
 				goto out;
 			}
 		}
+#elif defined(DIOCGPART)
+		/* DragonFly partition information */
+		struct partinfo dp;
+		if (ioctl(fd, DIOCGPART, &dp) >= 0) {
+			*retblocks = dp.media_size / blocksize;
+			printf("success!\n");
+			goto out;
+		}
+
 #endif /* defined(DIOCG*) */
 	}
 #endif /* HAVE_SYS_DISKLABEL_H */
