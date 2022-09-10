--- vendor/base/libs/androidfw/Asset.cpp.orig	2022-06-10 23:11:16 UTC
+++ vendor/base/libs/androidfw/Asset.cpp
@@ -40,7 +40,7 @@
 #include <sys/types.h>
 #include <unistd.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define lseek64 lseek
 #endif
 
