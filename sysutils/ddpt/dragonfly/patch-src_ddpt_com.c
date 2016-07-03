--- src/ddpt_com.c.orig	2014-12-27 08:01:02.000000000 +0200
+++ src/ddpt_com.c
@@ -97,7 +97,11 @@
 #ifdef SG_LIB_FREEBSD
 #include <sys/ioctl.h>
 #include <libgen.h>
+#ifdef __DragonFly__
+#include <sys/diskslice.h>
+#else
 #include <sys/disk.h>
+#endif
 #include <sys/filio.h>
 #endif
 
@@ -521,6 +525,15 @@ fbsd_get_blkdev_capacity(struct opts_t *
     if (op->verbose > 2)
         pr2serr("fbsd_get_blkdev_capacity: for %s\n", fname);
 
+#ifdef __DragonFly__
+    struct partinfo partinfo;
+    if (ioctl(blk_fd, DIOCGPART, &partinfo) < 0) {
+       perror("DIOCGPART ioctl error, couldn't retrieve partinfo");
+       return -1;
+    }
+    *blk_sz = sectorsize = partinfo.media_blksize;
+    mediasize = partinfo.media_size;
+#else
     /* For FreeBSD post suggests that /usr/sbin/diskinfo uses
      * ioctl(fd, DIOCGMEDIASIZE, &mediasize), where mediasize is an off_t.
      * also: ioctl(fd, DIOCGSECTORSIZE, &sectorsize) */
@@ -533,6 +546,7 @@ fbsd_get_blkdev_capacity(struct opts_t *
         perror("DIOCGMEDIASIZE ioctl error");
         return -1;
     }
+#endif
     if (sectorsize)
         *num_blks = mediasize / sectorsize;
     else
