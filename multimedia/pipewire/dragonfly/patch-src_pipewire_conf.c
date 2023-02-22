--- src/pipewire/conf.c.orig	2022-12-09 10:28:24 UTC
+++ src/pipewire/conf.c
@@ -38,7 +38,7 @@
 #ifdef HAVE_PWD_H
 #include <pwd.h>
 #endif
-#if defined(__FreeBSD__) || defined(__MidnightBSD__)
+#if defined(__FreeBSD__) || defined(__MidnightBSD__) || defined(__DragonFly__)
 #ifndef O_PATH
 #define O_PATH 0
 #endif
