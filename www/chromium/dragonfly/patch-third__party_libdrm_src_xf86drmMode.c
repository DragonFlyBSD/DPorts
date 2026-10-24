diff --git third_party/libdrm/src/xf86drmMode.c third_party/libdrm/src/xf86drmMode.c
index a4873a0fa0b4..a3a3c2cb2cb6 100644
--- third_party/libdrm/src/xf86drmMode.c
+++ third_party/libdrm/src/xf86drmMode.c
@@ -949,7 +949,7 @@ drm_public int drmCheckModesettingSupported(const char *busid)
 	closedir(sysdir);
 	if (found)
 		return 0;
-#elif defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
+#elif defined (__FreeBSD__) || defined (__FreeBSD_kernel__) || defined(__DragonFly__)
 	char sbusid[1024];
 	char oid[128];
 	int i, modesetting, ret;
