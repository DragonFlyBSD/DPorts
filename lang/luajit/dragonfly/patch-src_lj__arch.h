--- src/lj_arch.h.orig	2013-06-03 19:00:00.000000000 +0000
+++ src/lj_arch.h
@@ -67,7 +67,7 @@
 #elif defined(__MACH__) && defined(__APPLE__)
 #define LUAJIT_OS	LUAJIT_OS_OSX
 #elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
-      defined(__NetBSD__) || defined(__OpenBSD__)
+      defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define LUAJIT_OS	LUAJIT_OS_BSD
 #elif (defined(__sun__) && defined(__svr4__)) || defined(__CYGWIN__)
 #define LUAJIT_OS	LUAJIT_OS_POSIX
