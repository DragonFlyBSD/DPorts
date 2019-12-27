--- src/nnn.c.orig	2019-12-04 23:17:32 UTC
+++ src/nnn.c
@@ -44,7 +44,7 @@
 #include <sys/resource.h>
 #include <sys/stat.h>
 #include <sys/statvfs.h>
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/event.h>
 #include <sys/time.h>
@@ -58,7 +58,8 @@
 #ifndef NCURSES_WIDECHAR
 #define NCURSES_WIDECHAR 1
 #endif
-#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__sun)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__sun) || \
+  defined(__DragonFly__)
 #ifndef _XOPEN_SOURCE_EXTENDED
 #define _XOPEN_SOURCE_EXTENDED
 #endif
@@ -393,7 +394,7 @@ static char * const utils[] = {
 	"tar",
 #ifdef __APPLE__
 	"bashlock",
-#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	"lock",
 #else
 	"vlock",
