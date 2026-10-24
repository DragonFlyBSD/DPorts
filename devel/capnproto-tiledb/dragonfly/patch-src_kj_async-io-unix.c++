--- src/kj/async-io-unix.c++.orig	2023-08-22 20:55:23 UTC
+++ src/kj/async-io-unix.c++
@@ -66,7 +66,7 @@
 #include <sys/ucred.h>
 #endif
 
-#if !defined(SOL_LOCAL) && (__FreeBSD__ || __DragonflyBSD__ || __APPLE__)
+#if !defined(SOL_LOCAL) && (__FreeBSD__ || __DragonFly__ || __APPLE__)
 // On DragonFly, FreeBSD < 12.2 and older Darwin you're supposed to use 0 for SOL_LOCAL.
 #define SOL_LOCAL 0
 #endif
