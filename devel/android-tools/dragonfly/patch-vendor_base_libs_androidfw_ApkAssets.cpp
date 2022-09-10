--- vendor/base/libs/androidfw/ApkAssets.cpp.orig	2022-06-10 23:11:16 UTC
+++ vendor/base/libs/androidfw/ApkAssets.cpp
@@ -32,7 +32,7 @@
 #include "androidfw/misc.h"
 #include "androidfw/Util.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define lseek64 lseek
 #endif
 
