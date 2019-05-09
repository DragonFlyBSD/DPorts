--- src/fmm.c.intermediate	2019-05-09 12:27:18 UTC
+++ src/fmm.c
@@ -1245,7 +1245,7 @@ static void *fmm_allocate_host_gpu(uint3
 		 * fork. This avoids MMU notifiers and evictions due to user
 		 * memory mappings on fork.
 		 */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		minherit(mem, MemorySizeInBytes, INHERIT_NONE);
 #else
 		madvise(mem, MemorySizeInBytes, MADV_DONTFORK);
