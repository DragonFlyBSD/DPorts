--- src/compositor.h.orig	2015-10-02 23:17:37 +0200
+++ src/compositor.h
@@ -643,7 +643,10 @@
 	struct wl_signal output_moved_signal;
 
 	struct wl_event_loop *input_loop;
+/* XXX Implement similar behaviour using libevent2 */
+#if 0
 	struct wl_event_source *input_loop_source;
+#endif
 
 	struct wl_signal session_signal;
 	int session_active;
