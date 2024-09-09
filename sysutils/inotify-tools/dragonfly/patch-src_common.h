--- src/common.h.orig	2024-08-10 13:44:15.850540000 +0200
+++ src/common.h	2024-08-10 13:44:39.430962000 +0200
@@ -1,7 +1,7 @@
 #ifndef COMMON_H
 #define COMMON_H
 
-#if defined(__FreeBSD__) && defined(ENABLE_FANOTIFY)
+#if defined(__FreeBSD__) && defined(ENABLE_FANOTIFY) || defined(__DragonFly__) && defined(ENABLE_FANOTIFY)
 #error "FreeBSD does not support fanotify"
 #endif
 
