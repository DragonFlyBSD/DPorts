--- include/cpu_features_macros.h.intermediate	2021-12-24 06:25:18.000000000 +0000
+++ include/cpu_features_macros.h
@@ -83,7 +83,7 @@
 #define CPU_FEATURES_OS_DARWIN
 #endif
 
-#if (defined(__freebsd__) || defined(__FreeBSD__))
+#if (defined(__freebsd__) || defined(__FreeBSD__) || defined(__DragonFly__))
 #define CPU_FEATURES_OS_FREEBSD
 #endif
 
