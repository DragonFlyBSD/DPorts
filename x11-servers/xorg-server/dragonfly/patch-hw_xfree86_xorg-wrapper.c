--- hw/xfree86/xorg-wrapper.c.orig	2022-11-27 19:45:48.785564000 +0100
+++ hw/xfree86/xorg-wrapper.c	2022-11-27 19:49:05.278882000 +0100
@@ -39,7 +39,7 @@
 #include <sys/sysmacros.h>
 #endif
 #include <sys/types.h>
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #include <sys/consio.h>
 #endif
 #include <unistd.h>
@@ -170,7 +170,7 @@
     r = fstat(fd, &st);
     if (r == 0 && S_ISCHR(st.st_mode) && major(st.st_rdev) == 4)
       return 1;
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
     int idx;
 
     if (ioctl(fd, VT_GETINDEX, &idx) != -1)
@@ -230,9 +230,10 @@
         }
     }
 
-#ifdef WITH_LIBDRM
+#if defined(WITH_LIBDRM) && defined(__linux__)
     /* Detect if we need root rights, except when overridden by the config */
     if (needs_root_rights == -1) {
+        struct drm_mode_card_res res;
         for (i = 0; i < 16; i++) {
             snprintf(buf, sizeof(buf), DRM_DEV_NAME, DRM_DIR_NAME, i);
             fd = open(buf, O_RDWR);
