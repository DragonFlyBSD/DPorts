--- tools/storage_mon.c.orig	2021-08-19 07:37:57 UTC
+++ tools/storage_mon.c
@@ -16,6 +16,9 @@
 #ifdef __FreeBSD__
 #include <sys/disk.h>
 #endif
+#ifdef __DragonFly__
+#include <sys/diskslice.h>
+#endif
 
 #define MAX_DEVICES 25
 #define DEFAULT_TIMEOUT 10
@@ -49,7 +52,7 @@ static void *test_device(const char *dev
 		fprintf(stderr, "Failed to open %s: %s\n", device, strerror(errno));
 		exit(-1);
 	}
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	res = ioctl(device_fd, DIOCGMEDIASIZE, &devsize);
 #else
 	res = ioctl(device_fd, BLKGETSIZE64, &devsize);
