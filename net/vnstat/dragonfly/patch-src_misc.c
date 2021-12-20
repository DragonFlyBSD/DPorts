--- src/misc.c.orig	2021-07-20 14:42:49 UTC
+++ src/misc.c
@@ -1,4 +1,4 @@
-#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__) && !defined(__APPLE__) && !defined(__FreeBSD_kernel__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__) && !defined(__APPLE__) && !defined(__FreeBSD_kernel__) && !defined(__DragonFly__)
 #if defined(__clang__)
 #pragma clang diagnostic push
 #pragma clang diagnostic ignored "-Wreserved-id-macro"
