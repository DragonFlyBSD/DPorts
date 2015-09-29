--- utils/v4l2-compliance/v4l2-compliance.h.orig	2015-09-22 16:55:50.000000000 +0300
+++ utils/v4l2-compliance/v4l2-compliance.h
@@ -34,7 +34,7 @@
 
 #include <cv4l-helpers.h>
 
-#if !defined(ENODATA) && (defined(__FreeBSD__) || defined(__FreeBSD_kernel__))
+#if !defined(ENODATA) && (defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__))
 #define ENODATA ENOTSUP
 #endif
 
