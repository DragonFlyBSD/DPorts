diff --git third_party/libdrm/src/xf86drmMode.c third_party/libdrm/src/xf86drmMode.c
index 87e966035f8..e3fc1c4cb61 100644
--- src/3rdparty/chromium/third_party/libdrm/src/xf86drmMode.c
+++ src/3rdparty/chromium/third_party/libdrm/src/xf86drmMode.c
@@ -916,7 +916,7 @@ drm_public int drmCheckModesettingSupported(const char *busid)
 	closedir(sysdir);
 	if (found)
 		return 0;
-#elif defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
+#elif defined (__FreeBSD__) || defined (__FreeBSD_kernel__) || defined(__DragonFly__)
 	char sbusid[1024];
 	char oid[128];
 	int i, modesetting, ret;
