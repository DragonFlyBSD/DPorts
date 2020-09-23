--- src/sna/sna_video.c.orig	2020-05-15 16:56:58 UTC
+++ src/sna/sna_video.c
@@ -59,7 +59,8 @@
 #include "intel_options.h"
 
 #include <xf86xv.h>
-#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__) || \
+  defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/endian.h>
 #ifdef __OpenBSD__
