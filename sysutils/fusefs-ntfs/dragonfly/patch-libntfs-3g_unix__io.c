--- libntfs-3g/unix_io.c.intermediate	2019-05-16 16:34:25 UTC
+++ libntfs-3g/unix_io.c
@@ -61,11 +61,16 @@
  * USE_LOCK		- Lock the device/file when mounted.
  */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__)
 #include <sys/disk.h>
 #define USE_ALIGNED_IO	1
 #endif
 
+#ifdef __DragonFly__
+#include <sys/diskslice.h>
+#define USE_ALIGNED_IO	1
+#endif
+
 #if USE_UBLIO
 #include <sys/uio.h>
 #endif
@@ -142,21 +147,36 @@ raw_io_get_size(struct ntfs_device *dev)
 		return 0;
 	}
 
+#if defined(__DragonFly__) && defined (DIOCGPART)
+	struct partinfo dp;
+	if (ioctl(DEV_FD(dev), DIOCGPART, &dp) < 0) {
+		ntfs_log_perror("Failed to ioctl(DIOCGPART) '%s'",
+		    dev->d_name);
+		return -1;
+	}
+
+	ms = (off_t)dp.media_size;
+	bs = dp.media_blksize;
+#else
 	if (ioctl(DEV_FD(dev), DIOCGSECTORSIZE, &bs) < 0) {
 		ntfs_log_perror("Failed to ioctl(DIOCGSECTORSIZE) '%s'",
 		    dev->d_name);
 		return -1;
 	}
-	DEV_HANDLE(dev)->block_size = bs;
-	ntfs_log_trace("%s: block size %d\n", dev->d_name, bs);
 
 	if (ioctl(DEV_FD(dev), DIOCGMEDIASIZE, &ms) < 0) {
 		ntfs_log_perror("Failed to ioctl(DIOCGMEDIASIZE) '%s'",
 		    dev->d_name);
 		return -1;
 	}
+#endif /* defined(__DragonFly__) && defined (DIOCGPART) */
+
+	DEV_HANDLE(dev)->block_size = bs;
+	ntfs_log_trace("%s: block size %d\n", dev->d_name, bs);
+
 	DEV_HANDLE(dev)->media_size = ms;
 	ntfs_log_trace("%s: media size %lld\n", dev->d_name, ms);
+
 	return 0;
 }
 #endif
