--- src/nnn.c.orig	2019-03-18 21:47:22 UTC
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
@@ -58,7 +58,7 @@
 #ifndef NCURSES_WIDECHAR
 #define NCURSES_WIDECHAR 1
 #endif
-#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #ifndef _XOPEN_SOURCE_EXTENDED
 #define _XOPEN_SOURCE_EXTENDED
 #endif
@@ -277,7 +277,7 @@ static char g_cppath[PATH_MAX] __attribu
 static char g_tmpfpath[HOME_LEN_MAX] __attribute__ ((aligned));
 
 /* Replace-str for xargs on different platforms */
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #define REPLACE_STR 'J'
 #elif defined(__linux__) || defined(__CYGWIN__)
 #define REPLACE_STR 'I'
@@ -319,7 +319,7 @@ static char * const utils[] = {
 	"vidir",
 #ifdef __APPLE__
 	"bashlock",
-#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	"lock",
 #else
 	"vlock",
