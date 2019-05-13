--- config.def.h.intermediate	2019-05-13 08:00:42 UTC
+++ config.def.h
@@ -40,6 +40,8 @@
 #ifndef NCURSESW_INCLUDE_H
     #if defined(__APPLE__) || (defined(BSD) && !defined(__linux__)) || defined(__FreeBSD__)
         #define NCURSESW_INCLUDE_H <curses.h>
+    #elif defined(__DragonFly__)
+        #define NCURSESW_INCLUDE_H <ncurses/curses.h>
     #else
         #define NCURSESW_INCLUDE_H <ncursesw/curses.h>
     #endif
@@ -50,7 +52,7 @@
 #ifndef FORKPTY_INCLUDE_H
     #if defined(__APPLE__) || (defined(BSD) && !defined(__linux__))
         #define FORKPTY_INCLUDE_H <util.h>
-    #elif defined(__FreeBSD__)
+    #elif defined(__FreeBSD__) || defined(__DragonFly__)
         #define FORKPTY_INCLUDE_H <libutil.h>
     #else
         #define FORKPTY_INCLUDE_H <pty.h>
