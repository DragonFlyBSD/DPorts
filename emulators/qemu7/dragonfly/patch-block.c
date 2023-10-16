--- block.c.orig	2021-12-14 20:42:02 UTC
+++ block.c
@@ -56,7 +56,7 @@
 #ifdef CONFIG_BSD
 #include <sys/ioctl.h>
 #include <sys/queue.h>
-#if defined(HAVE_SYS_DISK_H)
+#if defined(HAVE_SYS_DISK_H) && !defined(__DragonFly__)
 #include <sys/disk.h>
 #endif
 #endif
