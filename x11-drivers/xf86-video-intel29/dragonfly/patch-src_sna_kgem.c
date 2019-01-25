--- src/sna/kgem.c.orig	2018-12-03 09:01:25 UTC
+++ src/sna/kgem.c
@@ -71,7 +71,7 @@ search_snoop_cache(struct kgem *kgem, un
 #define DBG_NO_USERPTR 0
 #define DBG_NO_UNSYNCHRONIZED_USERPTR 0
 #define DBG_NO_COHERENT_MMAP_GTT 0
-#define DBG_NO_LLC 0
+#define DBG_NO_LLC 1
 #define DBG_NO_SEMAPHORES 0
 #define DBG_NO_MADV 0
 #define DBG_NO_UPLOAD_CACHE 0
