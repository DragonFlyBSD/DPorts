--- cursor/wayland-cursor.c.orig	2015-06-13 00:51:38 +0200
+++ cursor/wayland-cursor.c
@@ -97,7 +97,11 @@
 
 	pool->data = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED,
 			  pool->fd, 0);
+#if defined(__DragonFly__)
+	if (pool->data == MAP_FAILED)
+#else
 	if (pool->data == (void *)-1)
+#endif
 		return 0;
 	pool->size = size;
 
