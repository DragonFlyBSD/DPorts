--- xf86drm.c.orig	2026-09-06 11:56:36 UTC
+++ xf86drm.c
@@ -3330,6 +3330,8 @@
     snprintf(path, sizeof(path), "/sys/dev/char/%d:%d/device/drm",
              maj, min);
     return stat(path, &sbuf) == 0;
+#elif defined(__DragonFly__)
+    return true;	/* DragonFly BSD has no fixed major device numbers */
 #elif defined(__FreeBSD__)
     char name[SPECNAMELEN];
 
