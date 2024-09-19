--- src/aacurses.c.orig	2024-09-19 09:29:52 UTC
+++ src/aacurses.c
@@ -71,8 +71,8 @@ static void curses_getsize(aa_context *
 {
     if (__resized_curses)
 	curses_uninit(c), curses_init(&c->params, NULL,&c->driverparams, NULL), __resized_curses = 0;
-    *width = stdscr->_maxx + 1;
-    *height = stdscr->_maxy + 1;
+    *width = getmaxx(stdscr) + 1;
+    *height = getmaxy(stdscr) + 1;
 #ifdef GPM_MOUSEDRIVER
     gpm_mx = *width;
     gpm_my = *height;
