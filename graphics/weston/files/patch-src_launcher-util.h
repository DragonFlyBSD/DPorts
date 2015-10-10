--- src/launcher-util.h.orig	2015-10-04 01:11:57 +0200
+++ src/launcher-util.h
@@ -52,4 +52,7 @@
 void
 weston_launcher_restore(struct weston_launcher *launcher);
 
+int
+weston_launcher_ttyfd(struct weston_launcher *launcher);
+
 #endif
