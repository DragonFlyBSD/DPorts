--- vendor/luajit/src/lj_arch.h.orig	2014-03-12 12:10:00 UTC
+++ vendor/luajit/src/lj_arch.h
@@ -67,6 +67,7 @@
 #elif defined(__MACH__) && defined(__APPLE__)
 #define LUAJIT_OS	LUAJIT_OS_OSX
 #elif (defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
+       defined(__DragonFly__) || \
        defined(__NetBSD__) || defined(__OpenBSD__)) && !defined(__ORBIS__)
 #define LUAJIT_OS	LUAJIT_OS_BSD
 #elif (defined(__sun__) && defined(__svr4__)) || defined(__CYGWIN__)
