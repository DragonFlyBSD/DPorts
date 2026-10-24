--- tools/storage_mon.c.orig
+++ tools/storage_mon.c
@@ -16,6 +16,9 @@
 #ifdef __FreeBSD__
 #include <sys/disk.h>
 #endif
+#ifdef __DragonFly__
+#include <sys/diskslice.h>
+#endif
 #include <config.h>
 #include <glib.h>
 #include <libgen.h>
@@ -140,7 +143,7 @@
 			exit(-1);
 		}
 	}
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	res = ioctl(device_fd, DIOCGMEDIASIZE, &devsize);
 #else
 	res = ioctl(device_fd, BLKGETSIZE64, &devsize);
@@ -170,7 +173,7 @@
 		int sec_size = 0;
 		void *buffer;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		res = ioctl(device_fd, DIOCGSECTORSIZE, &sec_size);
 #else
 		res = ioctl(device_fd, BLKSSZGET, &sec_size);
