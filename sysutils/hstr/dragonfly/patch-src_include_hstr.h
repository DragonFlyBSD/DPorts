--- src/include/hstr.h.oirg	2018-08-28 09:28:51 UTC
+++ src/include/hstr.h
@@ -23,7 +23,7 @@
 #include <locale.h>
 #ifdef __APPLE__
   #include <curses.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   #include <ncurses.h>
 #else
   #include <ncursesw/curses.h>
