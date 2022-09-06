--- vendor/core/libsparse/append2simg.cpp.orig	2022-06-10 23:11:16 UTC
+++ vendor/core/libsparse/append2simg.cpp
@@ -35,7 +35,7 @@
 #if defined(__APPLE__) && defined(__MACH__)
 #define lseek64 lseek
 #endif
-#if (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD__)
+#if (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define lseek64 lseek
 #define off64_t off_t
 #endif
