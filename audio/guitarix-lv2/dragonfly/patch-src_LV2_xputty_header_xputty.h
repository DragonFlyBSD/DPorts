--- src/LV2/xputty/header/xputty.h.orig	2025-08-25 10:07:04 UTC
+++ src/LV2/xputty/header/xputty.h
@@ -34,7 +34,7 @@
 #include <math.h>
 #include <cairo.h>
 #include "xputty-mswin.h" // no ifdef (waf dependency check)
-#if defined (__linux__) || (__FreeBSD__)
+#if defined (__linux__) || (__FreeBSD__) || defined(__DragonFly__)
 #include <cairo-xlib.h>
 #include <X11/Xutil.h>
 #include <X11/keysym.h>
