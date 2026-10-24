--- render/drm_syncobj.c.orig	2026-07-07 21:46:09 UTC
+++ render/drm_syncobj.c
@@ -161,7 +161,7 @@ out:
 bool wlr_drm_syncobj_timeline_check(struct wlr_drm_syncobj_timeline *timeline,
 		uint64_t point, uint32_t flags, bool *result) {
 	int etime;
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	etime = ETIMEDOUT;
 #else
 	etime = ETIME;
