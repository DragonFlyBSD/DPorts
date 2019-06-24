--- events.c.orig	2010-04-04 18:30:14 UTC
+++ events.c
@@ -19,6 +19,7 @@
  */
 
 #include <X11/Xatom.h>
+#include <sys/select.h>
 #include "windowlab.h"
 
 static void handle_key_press(XKeyEvent *);
