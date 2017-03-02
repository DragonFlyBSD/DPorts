i915 does not care, radeonkms might

--- xf86drmMode.c.orig	2017-01-28 03:15:16.000000000 +0200
+++ xf86drmMode.c
@@ -796,7 +796,7 @@ int drmCheckModesettingSupported(const c
 	closedir(sysdir);
 	if (found)
 		return 0;
-#elif defined (__FreeBSD__) || defined (__FreeBSD_kernel__)
+#elif defined (__FreeBSD__) || defined (__FreeBSD_kernel__) || defined(__DragonFly__)
 	char kbusid[1024], sbusid[1024];
 	char oid[128];
 	int domain, bus, dev, func;
@@ -829,8 +829,6 @@ int drmCheckModesettingSupported(const c
 			return -EINVAL;
 		return (modesetting ? 0 : -ENOSYS);
 	}
-#elif defined(__DragonFly__)
-	return 0;
 #endif
 #ifdef __OpenBSD__
 	int	fd;
