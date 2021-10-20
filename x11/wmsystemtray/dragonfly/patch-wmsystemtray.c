--- wmsystemtray.c.orig	2014-02-23 02:08:37 UTC
+++ wmsystemtray.c
@@ -23,6 +23,7 @@
 #include <string.h>
 #include <signal.h>
 #include <stdarg.h>
+#include <sys/select.h>
 
 #include <X11/Xlib.h>
 #include <X11/Xatom.h>
