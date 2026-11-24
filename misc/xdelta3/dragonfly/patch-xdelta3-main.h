--- xdelta3-main.h.orig
+++ xdelta3-main.h
@@ -129,7 +129,11 @@
 #elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) ||  \
     defined(__NetBSD__) || defined(__OpenBSD__)
 #include <sys/ioctl.h>
+#ifdef __DragonFly__
+#include <sys/diskslice.h> /* DIOCGMEDIASIZE */
+#else
 #include <sys/disk.h> /* DKIOCGETBLOCK*, DIOCGMEDIASIZE */
+#endif
 #endif
 #else
 #if defined(_MSC_VER)
