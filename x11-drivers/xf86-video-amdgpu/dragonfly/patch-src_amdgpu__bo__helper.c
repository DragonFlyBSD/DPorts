meson.build defines HAVE_GBM_BO_USE_FRONT_RENDERING to 0 when gbm.h lacks
the flag (mesa-libs 21.3 here), so test its value.

--- src/amdgpu_bo_helper.c.orig
+++ src/amdgpu_bo_helper.c
@@ -83,7 +83,7 @@
 		if (usage_hint & AMDGPU_CREATE_PIXMAP_SCANOUT)
 			bo_use |= GBM_BO_USE_SCANOUT;
 
-#ifdef HAVE_GBM_BO_USE_FRONT_RENDERING
+#if HAVE_GBM_BO_USE_FRONT_RENDERING
 		if (usage_hint & AMDGPU_CREATE_PIXMAP_FRONT)
 			bo_use |= GBM_BO_USE_FRONT_RENDERING;
 #endif
