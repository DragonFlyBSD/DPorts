--- third_party/dawn/third_party/renderdoc/renderdoc/api/app/renderdoc_app.h.orig	2026-09-19 23:06:15 UTC
+++ third_party/dawn/third_party/renderdoc/renderdoc/api/app/renderdoc_app.h
@@ -35,7 +35,8 @@
 
 #if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
 #define RENDERDOC_CC __cdecl
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__sun__) || defined(__OpenBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__sun__) || defined(__OpenBSD__) || \
+    defined(__DragonFly__)
 #define RENDERDOC_CC
 #elif defined(__APPLE__)
 #define RENDERDOC_CC
