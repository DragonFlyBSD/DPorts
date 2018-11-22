--- src/qemu/qemu_process.c.orig	2018-10-31 15:17:57 UTC
+++ src/qemu/qemu_process.c
@@ -27,7 +27,7 @@
 #include <sys/stat.h>
 #if defined(__linux__)
 # include <linux/capability.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
 # include <sys/param.h>
 # include <sys/cpuset.h>
 #endif
