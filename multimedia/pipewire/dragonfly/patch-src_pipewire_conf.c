--- src/pipewire/conf.c.orig	2022-07-07 08:19:55 UTC
+++ src/pipewire/conf.c
@@ -38,7 +38,7 @@
 #ifdef HAVE_PWD_H
 #include <pwd.h>
 #endif
-#if defined(__FreeBSD__) || defined(__MidnightBSD__)
+#if defined(__FreeBSD__) || defined(__MidnightBSD__) || defined(__DragonFly__)
 #define O_PATH 0
 #endif
 
