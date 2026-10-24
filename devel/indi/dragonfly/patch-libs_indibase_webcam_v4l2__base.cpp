--- libs/indibase/webcam/v4l2_base.cpp.orig
+++ libs/indibase/webcam/v4l2_base.cpp
@@ -51,7 +51,7 @@
 #include <asm/types.h> /* for videodev2.h */
 /* Kernel headers version */
 #include <linux/version.h>
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)
 #define LINUX_VERSION_CODE 1
 #define KERNEL_VERSION(...) 1
 #endif
