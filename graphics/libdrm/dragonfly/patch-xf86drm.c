--- xf86drm.c.orig	2021-07-02 12:49:05 UTC
+++ xf86drm.c
@@ -3211,6 +3211,8 @@ static bool drmNodeIsDRM(int maj, int mi
      * in /dev/drm/ and links in /dev/dri while a WIP in kernel driver creates
      * only device nodes in /dev/dri/ */
     return (!strncmp(name, "drm/", 4) || !strncmp(name, "dri/", 4));
+#elif defined(__DragonFly__)
+    return true;	/* DragonFly BSD has no fixed major device numbers */
 #else
     return maj == DRM_MAJOR;
 #endif
