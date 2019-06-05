The pipe2() is available on DragonFly.

--- src/3rdparty/forkfd/forkfd.c.orig	2019-03-06 07:59:50 UTC
+++ src/3rdparty/forkfd/forkfd.c
@@ -72,7 +72,7 @@
 
 #if (defined(__FreeBSD__) && defined(__FreeBSD_version) && __FreeBSD_version >= 1000032) || \
     (defined(__OpenBSD__) && OpenBSD >= 201505) || \
-    (defined(__NetBSD__) && __NetBSD_Version__ >= 600000000)
+    (defined(__NetBSD__) && __NetBSD_Version__ >= 600000000) || defined(__DragonFly__)
 #  define HAVE_PIPE2    1
 #endif
 #if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__FreeBSD_kernel__) || \
