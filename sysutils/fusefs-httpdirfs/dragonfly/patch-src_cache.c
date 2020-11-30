--- src/cache.c.orig	2019-11-01 13:02:51 UTC
+++ src/cache.c
@@ -6,6 +6,7 @@
 #include <errno.h>
 #include <fcntl.h>
 #include <stdlib.h>
+#include <stdint.h>
 #include <string.h>
 #include <unistd.h>
 
@@ -342,8 +343,8 @@ static long Data_read(Cache *cf, uint8_t
     }
 
     #ifdef CACHE_LOCK_DEBUG
-    fprintf(stderr, "Data_read(): thread %lu: locking seek_lock;\n",
-            pthread_self());
+    fprintf(stderr, "Data_read(): thread %ju: locking seek_lock;\n",
+            (uintmax_t)pthread_self());
     #endif
     PTHREAD_MUTEX_LOCK(&cf->seek_lock);
 
@@ -382,8 +383,8 @@ static long Data_read(Cache *cf, uint8_t
 
     end:
     #ifdef CACHE_LOCK_DEBUG
-    fprintf(stderr, "Data_read(): thread %lu: unlocking seek_lock;\n",
-            pthread_self());
+    fprintf(stderr, "Data_read(): thread %ju: unlocking seek_lock;\n",
+            (uintmax_t)pthread_self());
     #endif
     PTHREAD_MUTEX_UNLOCK(&cf->seek_lock);
 
@@ -410,8 +411,8 @@ static long Data_write(Cache *cf, const
     }
 
     #ifdef CACHE_LOCK_DEBUG
-    fprintf(stderr, "Data_write(): thread %lu: locking seek_lock;\n",
-            pthread_self());
+    fprintf(stderr, "Data_write(): thread %ju: locking seek_lock;\n",
+            (uintmax_t)pthread_self());
     #endif
     PTHREAD_MUTEX_LOCK(&cf->seek_lock);
 
@@ -439,8 +440,8 @@ static long Data_write(Cache *cf, const
 
     end:
     #ifdef CACHE_LOCK_DEBUG
-    fprintf(stderr, "Data_write(): thread %lu: unlocking seek_lock;\n",
-            pthread_self());
+    fprintf(stderr, "Data_write(): thread %ju: unlocking seek_lock;\n",
+            (uintmax_t)pthread_self());
     #endif
     PTHREAD_MUTEX_UNLOCK(&cf->seek_lock);
     return byte_written;
@@ -746,24 +747,24 @@ Cache *Cache_open(const char *fn)
     /*---------------- Cache_open() critical section -----------------*/
 
     #ifdef CACHE_LOCK_DEBUG
-    fprintf(stderr, "Cache_open(): thread %lu: locking cf_lock;\n",
-            pthread_self());
+    fprintf(stderr, "Cache_open(): thread %ju: locking cf_lock;\n",
+            (uintmax_t)pthread_self());
     #endif
     PTHREAD_MUTEX_LOCK(&cf_lock);
 
     if (link->cache_opened) {
         link->cache_opened++;
         #ifdef CACHE_LOCK_DEBUG
-        fprintf(stderr, "Cache_open(): thread %lu: unlocking cf_lock;\n",
-                pthread_self());
+        fprintf(stderr, "Cache_open(): thread %ju: unlocking cf_lock;\n",
+                (uintmax_t)pthread_self());
         #endif
         PTHREAD_MUTEX_UNLOCK(&cf_lock);
         return link->cache_ptr;
     }
 
     #ifdef CACHE_LOCK_DEBUG
-    fprintf(stderr, "Cache_open(): thread %lu: unlocking cf_lock;\n",
-            pthread_self());
+    fprintf(stderr, "Cache_open(): thread %ju: unlocking cf_lock;\n",
+            (uintmax_t)pthread_self());
     #endif
     PTHREAD_MUTEX_UNLOCK(&cf_lock);
     /*----------------------------------------------------------------*/
@@ -851,8 +852,8 @@ void Cache_close(Cache *cf)
     /*--------------- Cache_close() critical section -----------------*/
 
     #ifdef CACHE_LOCK_DEBUG
-    fprintf(stderr, "Cache_close(): thread %lu: locking cf_lock;\n",
-            pthread_self());
+    fprintf(stderr, "Cache_close(): thread %ju: locking cf_lock;\n",
+            (uintmax_t)pthread_self());
     #endif
     PTHREAD_MUTEX_LOCK(&cf_lock);
 
@@ -860,8 +861,8 @@ void Cache_close(Cache *cf)
 
     if (cf->link->cache_opened > 0) {
         #ifdef CACHE_LOCK_DEBUG
-        fprintf(stderr, "Cache_close(): thread %lu: unlocking cf_lock;\n",
-                pthread_self());
+        fprintf(stderr, "Cache_close(): thread %ju: unlocking cf_lock;\n",
+                (uintmax_t)pthread_self());
         #endif
         PTHREAD_MUTEX_UNLOCK(&cf_lock);
         return;
@@ -869,16 +870,16 @@ void Cache_close(Cache *cf)
 
     #ifdef CACHE_LOCK_DEBUG
     fprintf(stderr,
-            "Cache_close(): thread %lu: locking and unlocking bgt_lock;\n",
-            pthread_self());
+            "Cache_close(): thread %ju: locking and unlocking bgt_lock;\n",
+            (uintmax_t)pthread_self());
     #endif
     PTHREAD_MUTEX_LOCK(&cf->bgt_lock);
     PTHREAD_MUTEX_UNLOCK(&cf->bgt_lock);
 
 
     #ifdef CACHE_LOCK_DEBUG
-    fprintf(stderr, "Cache_close(): thread %lu: unlocking cf_lock;\n",
-            pthread_self());
+    fprintf(stderr, "Cache_close(): thread %ju: unlocking cf_lock;\n",
+            (uintmax_t)pthread_self());
     #endif
     PTHREAD_MUTEX_UNLOCK(&cf_lock);
 
@@ -934,12 +935,12 @@ static void *Cache_bgdl(void *arg)
 {
     Cache *cf = (Cache *) arg;
     #ifdef CACHE_LOCK_DEBUG
-    fprintf(stderr, "Cache_bgdl(): thread %lu: locking w_lock;\n",
-            pthread_self());
+    fprintf(stderr, "Cache_bgdl(): thread %ju: locking w_lock;\n",
+            (uintmax_t)pthread_self());
     #endif
     PTHREAD_MUTEX_LOCK(&cf->w_lock);
     uint8_t *recv_buf = CALLOC(cf->blksz, sizeof(uint8_t));
-    fprintf(stderr, "Cache_bgdl(): thread %lu: ", pthread_self());
+    fprintf(stderr, "Cache_bgdl(): thread %ju: ", (uintmax_t)pthread_self());
     long recv = path_download(cf->fs_path, (char *) recv_buf, cf->blksz,
                               cf->next_dl_offset);
     if (recv < 0) {
@@ -959,13 +960,13 @@ which does't make sense\n", recv);
     }
     free(recv_buf);
     #ifdef CACHE_LOCK_DEBUG
-    fprintf(stderr, "Cache_bgdl(): thread %lu: unlocking bgt_lock;\n",
-            pthread_self());
+    fprintf(stderr, "Cache_bgdl(): thread %ju: unlocking bgt_lock;\n",
+            (uintmax_t)pthread_self());
     #endif
     PTHREAD_MUTEX_UNLOCK(&cf->bgt_lock);
     #ifdef CACHE_LOCK_DEBUG
-    fprintf(stderr, "Cache_bgdl(): thread %lu: unlocking w_lock;\n",
-            pthread_self());
+    fprintf(stderr, "Cache_bgdl(): thread %ju: unlocking w_lock;\n",
+            (uintmax_t)pthread_self());
     #endif
     PTHREAD_MUTEX_UNLOCK(&cf->w_lock);
     pthread_detach(pthread_self());
@@ -987,8 +988,8 @@ long Cache_read(Cache *cf,  char * const
     } else {
         /* Wait for any other download thread to finish*/
         #ifdef CACHE_LOCK_DEBUG
-        fprintf(stderr, "Cache_read(): thread %ld: locking w_lock;\n",
-                pthread_self());
+        fprintf(stderr, "Cache_read(): thread %ju: locking w_lock;\n",
+                (uintmax_t)pthread_self());
         #endif
         PTHREAD_MUTEX_LOCK(&cf->w_lock);
         if (Seg_exist(cf, dl_offset)) {
@@ -996,8 +997,8 @@ long Cache_read(Cache *cf,  char * const
              * download thread. Send it off and unlock the I/O */
             send = Data_read(cf, (uint8_t *) output_buf, len, offset_start);
             #ifdef CACHE_LOCK_DEBUG
-            fprintf(stderr, "Cache_read(): thread %lu: unlocking w_lock;\n",
-                    pthread_self());
+            fprintf(stderr, "Cache_read(): thread %ju: unlocking w_lock;\n",
+                    (uintmax_t)pthread_self());
             #endif
             PTHREAD_MUTEX_UNLOCK(&cf->w_lock);
             goto bgdl;
@@ -1007,7 +1008,7 @@ long Cache_read(Cache *cf,  char * const
     /* ------------------------Download the segment -------------------------*/
 
     uint8_t *recv_buf = CALLOC(cf->blksz, sizeof(uint8_t));
-    fprintf(stderr, "Cache_read(): thread %lu: ", pthread_self());
+    fprintf(stderr, "Cache_read(): thread %ju: ", (uintmax_t)pthread_self());
     long recv = path_download(cf->fs_path, (char *) recv_buf, cf->blksz,
                                 dl_offset);
     if (recv < 0) {
@@ -1034,8 +1035,8 @@ which does't make sense\n", recv);
     send = Data_read(cf, (uint8_t *) output_buf, len, offset_start);
 
     #ifdef CACHE_LOCK_DEBUG
-    fprintf(stderr, "Cache_read(): thread %lu: unlocking w_lock;\n",
-            pthread_self());
+    fprintf(stderr, "Cache_read(): thread %ju: unlocking w_lock;\n",
+            (uintmax_t)pthread_self());
     #endif
     PTHREAD_MUTEX_UNLOCK(&cf->w_lock);
 
@@ -1049,8 +1050,8 @@ which does't make sense\n", recv);
         /* Stop the spawning of multiple background pthreads */
         if(!pthread_mutex_trylock(&cf->bgt_lock)) {
             #ifdef CACHE_LOCK_DEBUG
-            fprintf(stderr, "Cache_read(): thread %lu: trylocked bgt_lock;\n",
-                    pthread_self());
+            fprintf(stderr, "Cache_read(): thread %ju: trylocked bgt_lock;\n",
+                    (uintmax_t)pthread_self());
             #endif
             cf->next_dl_offset = next_dl_offset;
             if (pthread_create(&cf->bgt, NULL, Cache_bgdl, cf)) {
