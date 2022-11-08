--- common/drm.c.orig	2022-05-23 20:03:38 UTC
+++ common/drm.c
@@ -20,7 +20,7 @@ int drm_drop_master(int fd) {
 	return ioctl(fd, DRM_IOCTL_DROP_MASTER, 0);
 }
 
-#if defined(__linux__) || defined(__NetBSD__)
+#if defined(__linux__) || defined(__NetBSD__) || defined(__DragonFly__)
 int path_is_drm(const char *path) {
 	static const char prefix[] = "/dev/dri/";
 	static const int prefixlen = STRLEN(prefix);
