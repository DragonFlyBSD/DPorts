--- hw/xfree86/xorg-wrapper.c.orig	2020-01-13 22:57:05 UTC
+++ hw/xfree86/xorg-wrapper.c
@@ -39,7 +39,8 @@
 #include <sys/sysmacros.h>
 #endif
 #include <sys/types.h>
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
+    defined(__DragonFly__)
 #include <sys/consio.h>
 #endif
 #include <unistd.h>
@@ -170,7 +171,8 @@ static int on_console(int fd)
     r = fstat(fd, &st);
     if (r == 0 && S_ISCHR(st.st_mode) && major(st.st_rdev) == 4)
       return 1;
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
+      defined(__DragonFly__)
     int idx;

     if (ioctl(fd, VT_GETINDEX, &idx) != -1)
@@ -191,9 +193,6 @@ static int on_console(int fd)

 int main(int argc, char *argv[])
 {
-#ifdef WITH_LIBDRM
-    struct drm_mode_card_res res;
-#endif
     char buf[PATH_MAX];
     int i, r, fd;
     int kms_cards = 0;
@@ -230,9 +229,10 @@ int main(int argc, char *argv[])
         }
     }

-#ifdef WITH_LIBDRM
+#if defined(WITH_LIBDRM) && defined(__linux__)
     /* Detect if we need root rights, except when overriden by the config */
     if (needs_root_rights == -1) {
+        struct drm_mode_card_res res;
         for (i = 0; i < 16; i++) {
             snprintf(buf, sizeof(buf), DRM_DEV_NAME, DRM_DIR_NAME, i);
             fd = open(buf, O_RDWR);
