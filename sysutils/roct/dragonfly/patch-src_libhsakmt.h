--- src/libhsakmt.h.orig	2018-11-15 20:11:47 UTC
+++ src/libhsakmt.h
@@ -30,7 +30,7 @@
 #include <pthread.h>
 #include <stdint.h>
 #include <limits.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/mman.h>
 #endif
 #include <pci/pci.h>
