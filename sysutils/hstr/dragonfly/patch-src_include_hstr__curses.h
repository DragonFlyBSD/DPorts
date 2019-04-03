--- src/include/hstr_curses.h.orig	2018-08-28 09:28:51 UTC
+++ src/include/hstr_curses.h
@@ -21,7 +21,7 @@
 
 #ifdef __APPLE__
 #include <curses.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <ncurses.h>
 #else
 #include <ncursesw/curses.h>
