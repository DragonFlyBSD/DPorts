--- src/common.h.orig	2021-09-28 08:39:16 UTC
+++ src/common.h
@@ -1,7 +1,7 @@
 #ifndef COMMON_H
 #define COMMON_H
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define stat64 stat
 #define lstat64 lstat
 #ifdef ENABLE_FANOTIFY
