--- backend/session/direct-ipc.c.orig	2021-02-01 18:23:09.426045000 +0100
+++ backend/session/direct-ipc.c	2021-02-01 18:28:54.028055000 +0100
@@ -1,5 +1,5 @@
 #define _POSIX_C_SOURCE 200809L
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define __BSD_VISIBLE 1
 #include <linux/input.h>
 #endif
@@ -114,7 +114,7 @@
 				goto error;
 			}
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 			struct stat st;
 			if (fstat(fd, &st) < 0) {
 				ret = errno;
