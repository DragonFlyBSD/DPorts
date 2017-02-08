--- src/disc_bsd.c.orig	2017-01-29 12:43:54 UTC
+++ src/disc_bsd.c
@@ -32,7 +32,7 @@
 #include <sys/types.h>
 #include <unistd.h>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined __DragonFly__
 #include <netinet/in.h> /* for ntohl() */
 #else
 #include <util.h> /* for getrawpartition() */
@@ -44,7 +44,7 @@
 #define MAX_DEV_LEN 15
 
 static int get_device(int n, char* device_name, size_t device_name_length) {
-#if !defined(__FreeBSD__) /* /dev/rcdNX, where X is the letter for the raw partition */
+#if !defined(__FreeBSD__) && !defined __DragonFly__ /* /dev/rcdNX, where X is the letter for the raw partition */
 	snprintf(device_name, device_name_length, "/dev/rcd%d%c", n - 1, 'a' + getrawpartition());
 #else /* on FreeBSD it's just /dev/cdN */
 	snprintf(device_name, device_name_length, "/dev/cd%d", n - 1);
@@ -82,7 +82,7 @@ int mb_disc_unix_read_toc_header(int fd,
 
 	for (i = toc->first_track_num; i <= toc->last_track_num; ++i) {
 		assert(te[i - toc->first_track_num].track == i);
-#if defined(__FreeBSD__) /* LBA address is in network byte order */
+#if defined(__FreeBSD__) || defined __DragonFly__ /* LBA address is in network byte order */
 		toc->tracks[i].address = ntohl(te[i - toc->first_track_num].addr.lba);
 #else
 		toc->tracks[i].address = te[i - toc->first_track_num].addr.lba;
@@ -91,7 +91,7 @@ int mb_disc_unix_read_toc_header(int fd,
 	}
 	/* leadout - track number 170 (0xAA) */
 	assert(te[i - toc->first_track_num].track == 0xAA);
-#if defined(__FreeBSD__) /* LBA address is in network byte order */
+#if defined(__FreeBSD__) || defined __DragonFly__ /* LBA address is in network byte order */
 	toc->tracks[0].address = ntohl(te[i - toc->first_track_num].addr.lba);
 #else
 	toc->tracks[0].address = te[i - toc->first_track_num].addr.lba;
