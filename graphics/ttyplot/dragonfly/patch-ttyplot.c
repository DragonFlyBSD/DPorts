--- ttyplot.c.orig	2026-11-06 07:00:45 UTC
+++ ttyplot.c
@@ -8,7 +8,7 @@
 
 // This is needed on FreeBSD and macOS to get the ncurses widechar API,
 // and pkg-config fails to define it.
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define _XOPEN_SOURCE_EXTENDED
 #else
 // This is needed for musl libc
