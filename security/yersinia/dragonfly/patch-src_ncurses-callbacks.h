--- src/ncurses-callbacks.h.orig	2017-09-18 15:05:32 UTC
+++ src/ncurses-callbacks.h
@@ -31,6 +31,8 @@
 
 #ifdef HAVE_PANEL_H
 #include <panel.h>
+#else
+#include <ncurses/panel.h>
 #endif
 
 #include <ctype.h>
