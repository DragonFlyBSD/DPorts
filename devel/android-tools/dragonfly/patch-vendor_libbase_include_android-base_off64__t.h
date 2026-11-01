--- vendor/libbase/include/android-base/off64_t.h.orig
+++ vendor/libbase/include/android-base/off64_t.h
@@ -16,7 +16,7 @@
 
 #pragma once
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 /** Mac OS and FreeBSD have always had a 64-bit off_t, so they don't have off64_t. */
 typedef off_t off64_t;
 #endif
