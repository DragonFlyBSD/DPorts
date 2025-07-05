--- src/sna/kgem.c.orig	Tue May 13 02:19:56 2025
+++ src/sna/kgem.c	Tue May
@@ -682,7 +682,7 @@ retry_wc:
 
 static void *__kgem_bo_map__cpu(struct kgem *kgem, struct kgem_bo *bo)
 {
-	struct local_i915_gem_mmap arg;
+	struct local_i915_gem_mmap2 arg;
 	int err;
 
 	VG_CLEAR(arg);
@@ -691,7 +691,8 @@ static void *__kgem_bo_map__cpu(struct kgem *kgem, str
 retry:
 	arg.handle = bo->handle;
 	arg.size = bytes(bo);
-	if ((err = do_ioctl(kgem->fd, LOCAL_IOCTL_I915_GEM_MMAP, &arg))) {
+	arg.flags = 0;
+	if ((err = do_ioctl(kgem->fd, LOCAL_IOCTL_I915_GEM_MMAP_v2, &arg))) {
 		DBG(("%s: failed %d, throttling/cleaning caches\n",
 		     __FUNCTION__, err));
 		assert(err != -EINVAL || bo->prime);
