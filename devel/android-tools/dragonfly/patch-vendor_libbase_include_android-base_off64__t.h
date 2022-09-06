--- vendor/libbase/include/android-base/off64_t.h.orig	2022-06-10 23:11:16 UTC
+++ vendor/libbase/include/android-base/off64_t.h
@@ -16,7 +16,7 @@
 
 #pragma once
 
-#if defined(__APPLE__)
+#if defined(__APPLE__) || defined(__DragonFly__)
 /** Mac OS has always had a 64-bit off_t, so it doesn't have off64_t. */
 typedef off_t off64_t;
 #endif
