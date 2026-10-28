--- src/utils/networking.cpp.orig
+++ src/utils/networking.cpp
@@ -6,7 +6,7 @@
 {
 #if defined(__linux__)
   return "lo";
-#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
   return "lo0";
 #elif defined(_WIN32)
   // Not required as we directly use the 127.0.0.1 under Windows
