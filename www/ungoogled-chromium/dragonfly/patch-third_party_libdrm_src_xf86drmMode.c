diff --git third_party/libdrm/src/xf86drmMode.c third_party/libdrm/src/xf86drmMode.c
index 22a8a7c2297..bdf530d0cd6 100644
--- third_party/libdrm/src/xf86drmMode.c
+++ third_party/libdrm/src/xf86drmMode.c
@@ -939,7 +939,7 @@ drm_public int drmCheckModesettingSupported(const char *busid)
 	closedir(sysdir);
 	if (found)
 		return 0;
-#elif defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
+#elif defined (__FreeBSD__) || defined (__FreeBSD_kernel__) || defined(__DragonFly__)
 	char sbusid[1024];
 	char oid[128];
 	int i, modesetting, ret;
