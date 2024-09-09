--- src/pipewire/conf.c.orig	2023-10-06 09:37:06 UTC
+++ src/pipewire/conf.c
@@ -18,7 +18,8 @@
 #ifdef HAVE_PWD_H
 #include <pwd.h>
 #endif
-#if defined(__FreeBSD__) || defined(__MidnightBSD__) || defined(__GNU__)
+#if defined(__FreeBSD__) || defined(__MidnightBSD__) || defined(__GNU__) || \
+    defined(__DragonFly__)
 #ifndef O_PATH
 #define O_PATH 0
 #endif
