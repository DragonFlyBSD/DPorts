--- src/3rdparty/chromium/skia/ext/platform_canvas.h.orig	2018-04-10 14:05:55.000000000 +0000
+++ src/3rdparty/chromium/skia/ext/platform_canvas.h
@@ -73,7 +73,7 @@ enum OnFailureType {
                                         uint8_t* context,
                                         OnFailureType failure_type);
 #elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || \
-      defined(__sun) || defined(ANDROID)
+      defined(__sun) || defined(ANDROID) || defined(__DragonFly__)
   // Linux ---------------------------------------------------------------------
 
   // Construct a canvas from the given memory region. The memory is not cleared
