--- src/libuv/src/unix/core.c.orig	2015-08-03 21:49:59.000000000 +0300
+++ src/libuv/src/unix/core.c
@@ -53,7 +53,7 @@
 # include <sys/ioctl.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/sysctl.h>
 # include <sys/filio.h>
 # include <sys/ioctl.h>
@@ -432,7 +432,7 @@ skip:
 }
 
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__APPLE__)
 
 int uv__nonblock(int fd, int set) {
   int r;
@@ -455,7 +455,7 @@ int uv__cloexec(int fd, int set) {
   return r;
 }
 
-#else /* !(defined(__linux__) || defined(__FreeBSD__) || defined(__APPLE__)) */
+#else /* !(defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__APPLE__)) */
 
 int uv__nonblock(int fd, int set) {
   int flags;
@@ -512,7 +512,7 @@ int uv__cloexec(int fd, int set) {
   return r;
 }
 
-#endif /* defined(__linux__) || defined(__FreeBSD__) || defined(__APPLE__) */
+#endif /* defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__APPLE__) */
 
 
 /* This function is not execve-safe, there is a race window
