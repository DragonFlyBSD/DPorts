--- src/pipewire/conf.c.orig	2021-06-16 11:10:09.422985000 +0200
+++ src/pipewire/conf.c	2021-06-16 11:10:02.633139000 +0200
@@ -36,7 +36,7 @@
 #if HAVE_PWD_H
 #include <pwd.h>
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define O_PATH 0
 #endif
 
