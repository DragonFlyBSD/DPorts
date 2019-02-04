--- xbmc/cores/DllLoader/exports/wrapper.c.orig	2018-08-04 14:29:19.854375000 +0200
+++ xbmc/cores/DllLoader/exports/wrapper.c	2018-08-04 14:29:31.994637000 +0200
@@ -39,7 +39,7 @@
 #endif
 #include <dlfcn.h>
 
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_ANDROID)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_ANDROID)
 typedef off_t     __off_t;
 typedef int64_t   off64_t;
 typedef off64_t   __off64_t;
