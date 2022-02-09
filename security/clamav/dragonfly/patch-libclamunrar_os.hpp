--- libclamunrar/os.hpp.orig	2022-01-11 00:35:04 UTC
+++ libclamunrar/os.hpp
@@ -170,7 +170,7 @@
 #define SAVE_LINKS
 #endif
 
-#if defined(__linux) || defined(__FreeBSD__)
+#if defined(__linux) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #define USE_LUTIMES
 #endif
