--- vendor/f2fs-tools/lib/libf2fs.c.orig
+++ vendor/f2fs-tools/lib/libf2fs.c
@@ -949,6 +949,16 @@
 #define BLKSSZGET	DIOCGSECTORSIZE
 #endif /* __FreeBSD__ */

+/* DragonFly's sys/disk.h is kernel-only; the ioctls are in diskslice.h. */
+#if defined(__DragonFly__)
+#include <sys/diskslice.h>
+#include <sys/ioctl.h>
+#define BLKGETSIZE64	DIOCGMEDIASIZE
+#define BLKSSZGET	DIOCGSECTORSIZE
+/* No O_DSYNC; O_SYNC syncs the data too. */
+#define O_DSYNC		O_SYNC
+#endif
+
 #ifndef _WIN32
 static int open_check_fs(char *path, int flag)
 {
