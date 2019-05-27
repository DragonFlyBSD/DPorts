--- backend/session/direct-ipc.c.orig	2019-05-24 11:03:22.405311000 +0300
+++ backend/session/direct-ipc.c	2019-05-24 11:14:46.419242000 +0300
@@ -1,5 +1,5 @@
 #define _POSIX_C_SOURCE 200809L
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define __BSD_VISIBLE 1
 #include <linux/input.h>
 #endif
@@ -137,12 +137,13 @@ static void communicate(int sock) {
 
 			// These are the same flags that logind opens files with
 			int fd = open(msg.path, O_RDWR|O_CLOEXEC|O_NOCTTY|O_NONBLOCK);
-			int ret = errno;
+			int ret = 0;
 			if (fd == -1) {
+				ret = errno;
 				goto error;
 			}
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 			struct stat st;
 			if (fstat(fd, &st) < 0) {
 				ret = errno;
