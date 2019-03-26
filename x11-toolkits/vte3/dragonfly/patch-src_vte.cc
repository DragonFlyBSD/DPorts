Add missing <termios.h>, other sources include both with guards.
--- src/vte.cc.orig	2018-05-21 19:31:53 UTC
+++ src/vte.cc
@@ -31,6 +31,9 @@
 #ifdef HAVE_SYS_TERMIOS_H
 #include <sys/termios.h>
 #endif
+#ifdef HAVE_TERMIOS_H
+#include <termios.h>
+#endif
 
 #include <glib.h>
 #include <glib/gi18n-lib.h>
