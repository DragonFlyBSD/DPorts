--- src/compositor.c.orig	2015-08-14 20:28:16 +0200
+++ src/compositor.c
@@ -256,7 +256,7 @@
 	 * non-CLOEXEC fd to pass through exec. */
 	clientfd = dup(sockfd);
 	if (clientfd == -1) {
-		weston_log("compositor: dup failed: %m\n");
+		weston_log("compositor: dup failed: %s\n", strerror(errno));
 		return;
 	}
 
@@ -264,8 +264,8 @@
 	setenv("WAYLAND_SOCKET", s, 1);
 
 	if (execl(path, path, NULL) < 0)
-		weston_log("compositor: executing '%s' failed: %m\n",
-			path);
+		weston_log("compositor: executing '%s' failed: %s\n",
+			path, strerror(errno));
 }
 
 WL_EXPORT struct wl_client *
@@ -282,8 +282,8 @@
 
 	if (os_socketpair_cloexec(AF_UNIX, SOCK_STREAM, 0, sv) < 0) {
 		weston_log("weston_client_launch: "
-			"socketpair failed while launching '%s': %m\n",
-			path);
+			"socketpair failed while launching '%s': %s\n",
+			path, strerror(errno));
 		return NULL;
 	}
 
@@ -292,7 +292,8 @@
 		close(sv[0]);
 		close(sv[1]);
 		weston_log("weston_client_launch: "
-			"fork failed while launching '%s': %m\n", path);
+			"fork failed while launching '%s': %s\n", path,
+			strerror(errno));
 		return NULL;
 	}
 
@@ -2275,7 +2276,8 @@
 	output->repaint_needed = 0;
 
 	weston_compositor_repick(ec);
-	wl_event_loop_dispatch(ec->input_loop, 0);
+/* XXX can we do similar behaviour with the libevent2 event loop? */
+//	wl_event_loop_dispatch(ec->input_loop, 0);
 
 	wl_list_for_each_safe(cb, cnext, &frame_callback_list, link) {
 		wl_callback_send_done(cb->resource, output->frame_time);
@@ -2292,26 +2294,20 @@
 	return r;
 }
 
-static int
-weston_compositor_read_input(int fd, uint32_t mask, void *data)
-{
-	struct weston_compositor *compositor = data;
-
-	wl_event_loop_dispatch(compositor->input_loop, 0);
-
-	return 1;
-}
-
 static void
 weston_output_schedule_repaint_reset(struct weston_output *output)
 {
+#if 0
 	struct weston_compositor *compositor = output->compositor;
 	struct wl_event_loop *loop;
 	int fd;
+#endif
 
 	output->repaint_scheduled = 0;
 	TL_POINT("core_repaint_exit_loop", TLP_OUTPUT(output), TLP_END);
 
+/* XXX Implement similar behaviour with libevent */
+#if 0
 	if (compositor->input_loop_source)
 		return;
 
@@ -2320,6 +2316,7 @@
 	compositor->input_loop_source =
 		wl_event_loop_add_fd(loop, fd, WL_EVENT_READABLE,
 				     weston_compositor_read_input, compositor);
+#endif
 }
 
 static int
@@ -2470,10 +2467,13 @@
 	TL_POINT("core_repaint_enter_loop", TLP_OUTPUT(output), TLP_END);
 
 
+/* XXX Implement similar behaviour with libevent */
+#if 0
 	if (compositor->input_loop_source) {
 		wl_event_source_remove(compositor->input_loop_source);
 		compositor->input_loop_source = NULL;
 	}
+#endif
 }
 
 WL_EXPORT void
@@ -4529,7 +4529,7 @@
 	ec->idle_source = wl_event_loop_add_timer(loop, idle_handler, ec);
 	wl_event_source_timer_update(ec->idle_source, ec->idle_time * 1000);
 
-	ec->input_loop = wl_event_loop_create();
+	ec->input_loop = loop;
 
 	weston_layer_init(&ec->fade_layer, &ec->layer_list);
 	weston_layer_init(&ec->cursor_layer, &ec->fade_layer.link);
@@ -4550,8 +4550,11 @@
 	struct weston_output *output, *next;
 
 	wl_event_source_remove(ec->idle_source);
+/* XXX Implement similar behaviour with libevent */
+#if 0
 	if (ec->input_loop_source)
 		wl_event_source_remove(ec->input_loop_source);
+#endif
 
 	/* Destroy all outputs associated with this compositor */
 	wl_list_for_each_safe(output, next, &ec->output_list, link)
@@ -4569,7 +4572,10 @@
 
 	weston_plane_release(&ec->primary_plane);
 
+/* XXX Implement similar behaviour with libevent */
+#if 0
 	wl_event_loop_destroy(ec->input_loop);
+#endif
 }
 
 WL_EXPORT void
@@ -4621,18 +4627,25 @@
 {
 	/* In order of preference */
 	static const clockid_t clocks[] = {
+#if defined(__FreeBSD__)
+		CLOCK_MONOTONIC_FAST,	/* no jumps, may crawl, fast & coarse */
+#else
 		CLOCK_MONOTONIC_RAW,	/* no jumps, no crawling */
 		CLOCK_MONOTONIC_COARSE,	/* no jumps, may crawl, fast & coarse */
+#endif
 		CLOCK_MONOTONIC,	/* no jumps, may crawl */
+#if defined(__FreeBSD__)
+		CLOCK_REALTIME_FAST,	/* may jump and crawl, fast & coarse */
+#else
 		CLOCK_REALTIME_COARSE,	/* may jump and crawl, fast & coarse */
+#endif
 		CLOCK_REALTIME		/* may jump and crawl */
 	};
 	unsigned i;
 
 	for (i = 0; i < ARRAY_LENGTH(clocks); i++)
 		if (weston_compositor_set_presentation_clock(compositor,
-							     clocks[i]) == 0)
-			return 0;
+							     clocks[i]) == 0) return 0;
 
 	weston_log("Error: no suitable presentation clock available.\n");
 
@@ -4666,8 +4679,9 @@
 
 		if (!warned)
 			weston_log("Error: failure to read "
-				   "the presentation clock %#x: '%m' (%d)\n",
-				   compositor->presentation_clock, errno);
+				   "the presentation clock %#lx: '%s' (%d)\n",
+				   compositor->presentation_clock,
+				   strerror(errno), errno);
 		warned = true;
 	}
 }
