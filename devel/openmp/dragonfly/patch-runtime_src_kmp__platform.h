--- runtime/src/kmp_platform.h.orig	2017-10-20 19:30:57 UTC
+++ runtime/src/kmp_platform.h
@@ -44,7 +44,7 @@
 #else
 #endif
 
-#if (defined __FreeBSD__)
+#if (defined __FreeBSD__) || (defined __DragonFly__)
 #undef KMP_OS_FREEBSD
 #define KMP_OS_FREEBSD 1
 #endif
