--- xwayland/window-manager.c.orig	2015-10-03 13:37:36 +0200
+++ xwayland/window-manager.c
@@ -1910,7 +1910,9 @@
 	xcb_generic_event_t *event;
 	int count = 0;
 
-	while (event = xcb_poll_for_event(wm->conn), event != NULL) {
+	while (event = ((count || !(mask & WL_EVENT_READABLE)) ?
+	    xcb_poll_for_queued_event(wm->conn) : xcb_poll_for_event(wm->conn)),
+	    event != NULL) {
 		if (weston_wm_handle_selection_event(wm, event)) {
 			free(event);
 			count++;
