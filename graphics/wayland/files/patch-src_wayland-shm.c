--- src/wayland-shm.c.orig	2020-04-08 15:51:20.552406000 +0300
+++ src/wayland-shm.c	2020-04-08 16:05:05.566225000 +0300
@@ -30,6 +30,10 @@
 
 #define _GNU_SOURCE
 
+#if defined(__DragonFly__)
+#include <sys/param.h>
+#endif
+
 #include "config.h"
 
 #include <stdbool.h>
@@ -64,6 +68,9 @@ struct wl_shm_pool {
 	int32_t size;
 	int32_t new_size;
 	bool sigbus_is_impossible;
+#if defined(__DragonFly__)
+	int fd;
+#endif
 };
 
 struct wl_shm_buffer {
@@ -89,7 +96,24 @@ shm_pool_finish_resize(struct wl_shm_poo
 	if (pool->size == pool->new_size)
 		return;
 
+#if defined(__DragonFly__)
+	int32_t osize = (pool->size + PAGE_SIZE - 1) & ~PAGE_MASK;
+	if (pool->new_size <= osize) {
+		pool->size = pool->new_size;
+		return;
+	}
+	data = mmap(pool->data + osize, pool->new_size - osize, PROT_READ,
+	    MAP_SHARED | MAP_TRYFIXED, pool->fd, osize);
+	if (data == MAP_FAILED) {
+		munmap(pool->data, pool->size);
+		data = mmap(NULL, pool->new_size, PROT_READ, MAP_SHARED, pool->fd, 0);
+	} else {
+		pool->size = pool->new_size;
+		return;
+	}
+#else
 	data = mremap(pool->data, pool->size, pool->new_size, MREMAP_MAYMOVE);
+#endif
 	if (data == MAP_FAILED) {
 		wl_resource_post_error(pool->resource,
 				       WL_SHM_ERROR_INVALID_FD,
@@ -116,6 +140,9 @@ shm_pool_unref(struct wl_shm_pool *pool,
 		return;
 
 	munmap(pool->data, pool->size);
+#if defined(__DragonFly__)
+	close(pool->fd);
+#endif
 	free(pool);
 }
 
@@ -240,6 +267,8 @@ shm_pool_resize(struct wl_client *client
 				       "shrinking pool invalid");
 		return;
 	}
+	if (size == pool->size)
+		return;
 
 	pool->new_size = size;
 
@@ -292,7 +321,7 @@ shm_create_pool(struct wl_client *client
 	pool->size = size;
 	pool->new_size = size;
 	pool->data = mmap(NULL, size,
-			  PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
+			  PROT_READ, MAP_SHARED, fd, 0);
 	if (pool->data == MAP_FAILED) {
 		wl_resource_post_error(resource,
 				       WL_SHM_ERROR_INVALID_FD,
@@ -300,13 +329,20 @@ shm_create_pool(struct wl_client *client
 				       strerror(errno));
 		goto err_free;
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
@@ -511,6 +547,14 @@ sigbus_handler(int signum, siginfo_t *in
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
@@ -518,6 +562,7 @@ sigbus_handler(int signum, siginfo_t *in
 		reraise_sigbus();
 		return;
 	}
+#endif
 }
 
 static void
