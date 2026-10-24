--- environ.c.intermediate	2026-09-04 05:12:50 UTC
+++ environ.c
@@ -58,7 +58,7 @@
   #include <sys/ioctl.h>
   #include <sys/statfs.h>
   #include <sys/statvfs.h>
- #elif defined(__FreeBSD__)||defined(__NetBSD__)
+ #elif defined(__FreeBSD__)||defined(__NetBSD__)||defined(__DragonFly__)
   #include <sys/param.h>
   #include <sys/mount.h>
  #elif defined(__QNXNTO__)
