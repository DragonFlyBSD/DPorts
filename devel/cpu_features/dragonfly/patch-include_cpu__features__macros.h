--- include/cpu_features_macros.h.orig	2026-06-01 12:49:57 UTC
+++ include/cpu_features_macros.h
@@ -91,7 +91,7 @@
 // Os
 ////////////////////////////////////////////////////////////////////////////////
 
-#if (defined(__freebsd__) || defined(__FreeBSD__))
+#if (defined(__freebsd__) || defined(__FreeBSD__) || defined(__DragonFly__))
 #define CPU_FEATURES_OS_FREEBSD
 #endif
 
