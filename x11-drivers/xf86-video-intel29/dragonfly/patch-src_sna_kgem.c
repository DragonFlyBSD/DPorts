--- src/sna/kgem.c.orig	2014-12-09 16:08:21 UTC
+++ src/sna/kgem.c
@@ -70,7 +70,7 @@ search_snoop_cache(struct kgem *kgem, un
 #define DBG_NO_CREATE2 0
 #define DBG_NO_USERPTR 0
 #define DBG_NO_UNSYNCHRONIZED_USERPTR 0
-#define DBG_NO_LLC 0
+#define DBG_NO_LLC 1
 #define DBG_NO_SEMAPHORES 0
 #define DBG_NO_MADV 0
 #define DBG_NO_UPLOAD_CACHE 0
