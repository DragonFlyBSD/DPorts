--- desktop-shell/shell.h.orig	2015-10-05 21:53:57 +0200
+++ desktop-shell/shell.h
@@ -195,6 +195,8 @@
 	enum animation_type startup_animation_type;
 	enum animation_type focus_animation_type;
 
+	struct wl_event_source *lock_timer;
+
 	struct weston_layer minimized_layer;
 
 	struct wl_listener seat_create_listener;
