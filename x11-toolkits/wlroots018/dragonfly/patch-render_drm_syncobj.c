--- render/drm_syncobj.c.orig	2025-11-16 14:47:45.697175000 +0100
+++ render/drm_syncobj.c	2025-11-16 14:48:07.297335000 +0100
@@ -126,7 +126,7 @@ out:
 bool wlr_drm_syncobj_timeline_check(struct wlr_drm_syncobj_timeline *timeline,
 		uint64_t point, uint32_t flags, bool *result) {
 	int etime;
-#if defined(__FreeBSD__)
+#if defined(__DragonFly__) || defined(__FreeBSD__)
 	etime = ETIMEDOUT;
 #else
 	etime = ETIME;
