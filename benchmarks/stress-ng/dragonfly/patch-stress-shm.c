--- stress-shm.c.orig	2016-05-27 17:14:35.000000000 +0300
+++ stress-shm.c
@@ -188,8 +188,14 @@ static int stress_shm_posix_child(
 			(void)fsync(shm_fd);
 
 			/* Expand and shrink the mapping */
+#ifdef __DragonFly__
+/* XXX no support for posix_fallocate() */
+			(void)ftruncate(shm_fd, 0 + sz + page_size);
+			(void)ftruncate(shm_fd, 0 + sz);
+#else
 			(void)posix_fallocate(shm_fd, 0, sz + page_size);
 			(void)posix_fallocate(shm_fd, 0, sz);
+#endif
 			(void)close(shm_fd);
 
 			if (!opt_do_run)
