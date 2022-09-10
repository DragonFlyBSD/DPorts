--- vendor/base/libs/androidfw/ObbFile.cpp.orig	2022-06-10 23:11:16 UTC
+++ vendor/base/libs/androidfw/ObbFile.cpp
@@ -27,7 +27,8 @@
 #include <utils/Compat.h>
 #include <utils/Log.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+#define off64_t off_t
 #define lseek64 lseek
 #endif
 
