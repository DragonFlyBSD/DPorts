--- disk-utils/cfdisk.c.orig	2020-07-23 09:26:04 UTC
+++ disk-utils/cfdisk.c
@@ -70,7 +70,7 @@ static const char *default_disks[] = {
 #ifdef __GNU__
 		"/dev/hd0",
 		"/dev/sd0",
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 		"/dev/ad0",
 		"/dev/da0",
 #else
