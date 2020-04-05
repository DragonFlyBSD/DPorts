--- src/sna/kgem.c.intermediate	2020-04-04 23:50:24 UTC
+++ src/sna/kgem.c
@@ -74,7 +74,7 @@ search_snoop_cache(struct kgem *kgem, un
 #define DBG_NO_USERPTR 0
 #define DBG_NO_UNSYNCHRONIZED_USERPTR 0
 #define DBG_NO_COHERENT_MMAP_GTT 0
-#define DBG_NO_LLC 0
+#define DBG_NO_LLC 1
 #define DBG_NO_SEMAPHORES 0
 #define DBG_NO_MADV 0
 #define DBG_NO_UPLOAD_CACHE 0
