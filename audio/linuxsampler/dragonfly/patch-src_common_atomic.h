--- src/common/atomic.h.intermediate	2016-01-19 16:18:39.000000000 +0200
+++ src/common/atomic.h
@@ -38,7 +38,7 @@
 #define CONFIG_SMP   /* ... the macro the kernel headers use */
 #endif
 
-#if defined(__linux__) || defined(WIN32) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(WIN32) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #ifdef _ARCH_PPC
 
 /*
