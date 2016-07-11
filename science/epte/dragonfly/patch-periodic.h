--- periodic.h.intermediate	2016-07-10 11:17:09 UTC
+++ periodic.h
@@ -296,7 +296,7 @@ modification follow.
 #ifdef VMS
 #include <curses.h>
 #endif
-#if defined(linux) || defined(__FreeBSD__)
+#if defined(linux) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <ncurses.h>
 #endif
 
