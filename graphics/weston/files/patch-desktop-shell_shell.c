--- desktop-shell/shell.c.orig	2015-10-05 21:49:25 +0200
+++ desktop-shell/shell.c
@@ -6203,6 +6203,40 @@
 	kill(pid, SIGKILL);
 }
 
+static int
+lock_timeout_handler(void *data)
+{
+	struct desktop_shell *shell = data;
+
+	if (shell->lock_timer != NULL) {
+		wl_event_source_remove(shell->lock_timer);
+		shell->lock_timer = NULL;
+	}
+
+	lock(shell);
+
+	return 0;
+}
+
+static void 
+lock_binding(struct weston_keyboard *keyboard, uint32_t time,
+	     uint32_t key, void *data)
+{
+	struct desktop_shell *shell = data;
+	struct weston_compositor *compositor = shell->compositor;
+	struct wl_event_loop *loop;
+
+	loop = wl_display_get_event_loop(compositor->wl_display);
+	if (shell->lock_timer == NULL)
+		shell->lock_timer =
+		    wl_event_loop_add_timer(loop, lock_timeout_handler, shell);
+
+	if (shell->lock_timer == NULL)
+		return ;
+
+	wl_event_source_timer_update(shell->lock_timer, 5 * 1000);
+}
+
 static void
 workspace_up_binding(struct weston_keyboard *keyboard, uint32_t time,
 		     uint32_t key, void *data)
@@ -6551,6 +6585,9 @@
 				          backlight_binding, ec);
 	weston_compositor_add_key_binding(ec, KEY_K, mod,
 				          force_kill_binding, shell);
+	weston_compositor_add_key_binding(ec, KEY_L,
+					  MODIFIER_SUPER | MODIFIER_ALT,
+				          lock_binding, shell);
 	weston_compositor_add_key_binding(ec, KEY_UP, mod,
 					  workspace_up_binding, shell);
 	weston_compositor_add_key_binding(ec, KEY_DOWN, mod,
