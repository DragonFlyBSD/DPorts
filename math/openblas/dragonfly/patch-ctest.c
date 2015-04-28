--- ctest.c.orig	2015-03-24 20:07:07 UTC
+++ ctest.c
@@ -48,7 +48,7 @@ COMPILER_GNU
 OS_LINUX
 #endif
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 OS_FREEBSD
 #endif
 
