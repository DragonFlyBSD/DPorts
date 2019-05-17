--- lib/mount_bsd.c.intermediate	2019-05-14 22:19:51.000000000 +0000
+++ lib/mount_bsd.c
@@ -207,7 +207,13 @@ void fuse_kern_unmount(const char *mount
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
 
