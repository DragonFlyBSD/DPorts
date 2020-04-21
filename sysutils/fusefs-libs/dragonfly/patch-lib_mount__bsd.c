--- lib/mount_bsd.c.orig	2020-04-21 09:40:43 UTC
+++ lib/mount_bsd.c
@@ -15,7 +15,9 @@
 #include <sys/stat.h>
 #include <sys/wait.h>
 #include <sys/sysctl.h>
+#ifndef __DragonFly__
 #include <sys/user.h>
+#endif
 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
@@ -207,7 +209,13 @@ void fuse_kern_unmount(const char *mount
 /* Check if kernel is doing init in background */
 static int init_backgrounded(void)
 {
+#ifdef __DragonFly__
+	/* XXX sysctl missing */
+	unsigned ibg;
+	size_t len;
+#else
 	unsigned ibg, len;
+#endif
 
 	len = sizeof(ibg);
 
