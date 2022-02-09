--- image.h.orig	2021-02-28 13:22:38 UTC
+++ image.h
@@ -29,6 +29,7 @@
 #ifndef _MKIMG_IMAGE_H_
 #define	_MKIMG_IMAGE_H_
 
+#include <sys/types.h>
 #include <stdint.h>
 
 typedef int64_t lba_t;
