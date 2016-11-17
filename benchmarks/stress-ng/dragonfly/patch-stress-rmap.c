--- stress-rmap.c.orig	2016-11-08 18:02:04.000000000 +0200
+++ stress-rmap.c
@@ -173,7 +173,12 @@ int stress_rmap(
 	}
 	(void)unlink(filename);
 
+#ifdef __DragonFly__
+/* XXX no support for posix_fallocate() */
+	if (ftruncate(fd, 0 + sz) < 0) {
+#else
 	if (posix_fallocate(fd, 0, sz) < 0) {
+#endif
 		pr_fail_err(name, "posix_fallocate");
 		(void)close(fd);
 		(void)stress_temp_dir_rm(name, mypid, instance);
