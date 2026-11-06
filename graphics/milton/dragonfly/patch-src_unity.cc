--- src/unity.cc.orig	2026-11-06 02:58:04 UTC
+++ src/unity.cc
@@ -19,7 +19,7 @@
 
 #if defined(_WIN32)
     #include "platform_windows.cc"
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     #include "platform_unix.cc"
     #include "platform_linux.cc"
 #elif defined(__MACH__)
