--- cd-discid.c.orig	2003-12-15 23:55:00 UTC
+++ cd-discid.c
@@ -11,6 +11,7 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
+#include <arpa/inet.h>
 
 #include <fcntl.h>
 #include <sys/ioctl.h>
@@ -37,7 +38,7 @@
  * to compile on Solaris */
 #define cdte_track_address cdte_addr.lba
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/cdio.h>
 #define        CDROM_LBA       CD_LBA_FORMAT   /* first frame is 0 */
@@ -214,12 +215,12 @@ int main(int argc, char *argv[])
 	}
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	TocEntry[i].cdte_track_address = ntohl(TocEntry[i].cdte_track_address);
 #endif       
 
 	for (i=0; i < last; i++) {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		TocEntry[i].cdte_track_address = ntohl(TocEntry[i].cdte_track_address);
 #endif
 		cksum += cddb_sum((TocEntry[i].cdte_track_address + CD_MSF_OFFSET) / CD_FRAMES);
