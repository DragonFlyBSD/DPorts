--- stress-rmap.c.orig	2017-02-09 11:08:58 UTC
+++ stress-rmap.c
@@ -144,7 +144,11 @@ int stress_rmap(const args_t *args)
 	}
 	(void)unlink(filename);
 
+#ifdef __DragonFly__
+	if (ftruncate(fd, 0 + sz) < 0) {
+#else
 	if (posix_fallocate(fd, 0, sz) < 0) {
+#endif
 		pr_fail_err("posix_fallocate");
 		(void)close(fd);
 		(void)stress_temp_dir_rm_args(args);
