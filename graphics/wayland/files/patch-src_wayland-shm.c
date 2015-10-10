--- src/wayland-shm.c.orig	2015-06-13 00:31:24 +0200
+++ src/wayland-shm.c
@@ -30,6 +30,10 @@
 
 #define _GNU_SOURCE
 
+#if defined(__DragonFly__)
+#include <sys/param.h>
+#endif
+
 #include <stdbool.h>
 #include <stdio.h>
 #include <stdlib.h>
@@ -55,6 +59,9 @@
 	int refcount;
 	char *data;
 	int32_t size;
+#if defined(__DragonFly__)
+	int fd;
+#endif
 };
 
 struct wl_shm_buffer {
@@ -80,6 +87,9 @@
 		return;
 
 	munmap(pool->data, pool->size);
+#if defined(__DragonFly__)
+	close(pool->fd);
+#endif
 	free(pool);
 }
 
@@ -205,8 +215,27 @@
 				       "shrinking pool invalid");
 		return;
 	}
+	if (size == pool->size)
+		return;
 
+#if defined(__DragonFly__)
+	int32_t osize = (pool->size + PAGE_SIZE - 1) & ~PAGE_MASK;
+	if (size <= osize) {
+		pool->size = size;
+		return;
+	}
+	data = mmap(pool->data + osize, size - osize, PROT_READ,
+	    MAP_SHARED | MAP_TRYFIXED, pool->fd, osize);
+	if (data == MAP_FAILED) {
+		munmap(pool->data, pool->size);
+		data = mmap(NULL, size, PROT_READ, MAP_SHARED, pool->fd, 0);
+	} else {
+		pool->size = size;
+		return;
+	}
+#else
 	data = mremap(pool->data, pool->size, size, MREMAP_MAYMOVE);
+#endif
 	if (data == MAP_FAILED) {
 		wl_resource_post_error(resource,
 				       WL_SHM_ERROR_INVALID_FD,
@@ -245,21 +274,27 @@
 
 	pool->refcount = 1;
 	pool->size = size;
-	pool->data = mmap(NULL, size,
-			  PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
+	pool->data = mmap(NULL, size, PROT_READ, MAP_SHARED, fd, 0);
 	if (pool->data == MAP_FAILED) {
 		wl_resource_post_error(resource,
 				       WL_SHM_ERROR_INVALID_FD,
 				       "failed mmap fd %d", fd);
 		goto err_close;
 	}
+#if defined(__DragonFly__)
+	pool->fd = fd;
+#else
 	close(fd);
+#endif
 
 	pool->resource =
 		wl_resource_create(client, &wl_shm_pool_interface, 1, id);
 	if (!pool->resource) {
 		wl_client_post_no_memory(client);
 		munmap(pool->data, pool->size);
+#if defined(__DragonFly__)
+		close(fd);
+#endif
 		free(pool);
 		return;
 	}
@@ -449,6 +484,14 @@
 	sigbus_data->fallback_mapping_used = 1;
 
 	/* This should replace the previous mapping */
+#if defined(__DragonFly__)
+	if (mmap(pool->data, pool->size,
+		 PROT_READ, MAP_PRIVATE | MAP_FIXED | MAP_ANON,
+		 0, 0) == MAP_FAILED) {
+		reraise_sigbus();
+		return;
+	}
+#else
 	if (mmap(pool->data, pool->size,
 		 PROT_READ | PROT_WRITE,
 		 MAP_PRIVATE | MAP_FIXED | MAP_ANONYMOUS,
@@ -456,6 +499,7 @@
 		reraise_sigbus();
 		return;
 	}
+#endif
 }
 
 static void
