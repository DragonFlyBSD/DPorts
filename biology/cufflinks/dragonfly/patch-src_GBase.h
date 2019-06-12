--- src/GBase.h.intermediate	2019-05-30 15:37:02.000000000 +0000
+++ src/GBase.h
@@ -1,6 +1,6 @@
 #ifndef G_BASE_DEFINED
 #define G_BASE_DEFINED
-#if !defined(_POSIX_SOURCE) && !defined(__FreeBSD__)
+#if !defined(_POSIX_SOURCE) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 //mostly for MinGW
 #define _POSIX_SOURCE
 #endif
