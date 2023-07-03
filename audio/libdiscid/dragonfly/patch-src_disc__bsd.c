--- src/disc_bsd.c.orig	2023-04-20 14:35:16.920723000 +0200
+++ src/disc_bsd.c	2023-04-20 14:36:46.032250000 +0200
@@ -32,7 +32,7 @@
 #include <sys/types.h>
 #include <unistd.h>
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
 #include <netinet/in.h> /* for ntohl() */
 #else
 #include <util.h> /* for getrawpartition() */
@@ -44,7 +44,7 @@
 #define MAX_DEV_LEN 15
 
 static int get_device(int n, char* device_name, size_t device_name_length) {
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
 	/* on FreeBSD it's just /dev/cdN */
 	snprintf(device_name, device_name_length, "/dev/cd%d", n - 1);
 #else
@@ -84,7 +84,7 @@ int mb_disc_unix_read_toc_header(int fd,
 
 	for (i = toc->first_track_num; i <= toc->last_track_num; ++i) {
 		assert(te[i - toc->first_track_num].track == i);
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) /* LBA address is in network byte order */
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) /* LBA address is in network byte order */
 		toc->tracks[i].address = ntohl(te[i - toc->first_track_num].addr.lba);
 #else
 		toc->tracks[i].address = te[i - toc->first_track_num].addr.lba;
@@ -93,7 +93,7 @@ int mb_disc_unix_read_toc_header(int fd,
 	}
 	/* leadout - track number 170 (0xAA) */
 	assert(te[i - toc->first_track_num].track == 0xAA);
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) /* LBA address is in network byte order */
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) /* LBA address is in network byte order */
 	toc->tracks[0].address = ntohl(te[i - toc->first_track_num].addr.lba);
 #else
 	toc->tracks[0].address = te[i - toc->first_track_num].addr.lba;
