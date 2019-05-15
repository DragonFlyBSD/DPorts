--- lib/mount_bsd.c.orig	2019-04-16 18:46:20 UTC
+++ lib/mount_bsd.c
@@ -138,6 +138,7 @@ static int init_backgrounded(void)
 
 	len = sizeof(ibg);
 
+/* XXX not available */
 	if (sysctlbyname("vfs.fuse.init_backgrounded", &ibg, &len, NULL, 0))
 		return 0;
 
