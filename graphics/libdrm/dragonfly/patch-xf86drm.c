--- xf86drm.c.orig	2019-04-19 15:52:29 UTC
+++ xf86drm.c
@@ -2796,6 +2796,8 @@ static bool drmNodeIsDRM(int maj, int mi
     snprintf(path, sizeof(path), "/sys/dev/char/%d:%d/device/drm",
              maj, min);
     return stat(path, &sbuf) == 0;
+#elif __DragonFly__
+    return true;	/* DragonFly BSD has no fixed major device numbers */
 #else
     return maj == DRM_MAJOR;
 #endif
