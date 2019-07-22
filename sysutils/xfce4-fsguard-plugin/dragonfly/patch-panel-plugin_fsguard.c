--- panel-plugin/fsguard.c.intermediate	2019-07-21 21:49:07 UTC
+++ panel-plugin/fsguard.c
@@ -40,7 +40,8 @@
 #include <sys/stat.h>
 #if defined(__linux__) || defined(__GNU__)
 #include <sys/vfs.h>
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD_kernel__) || \
+      defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/mount.h>
 #endif
