--- spa/plugins/alsa/alsa-pcm.c.orig
+++ spa/plugins/alsa/alsa-pcm.c
@@ -726,9 +726,19 @@
 	return size;
 }
 
+#ifdef __DragonFly__
+/* DragonFly has no fopencookie; adapt log_write to funopen's writefn
+ * signature (int (*)(void *, const char *, int)). */
+static int
+log_write_funopen(void *cookie, const char *buf, int size)
+{
+	return (int) log_write(cookie, buf, (size_t) size);
+}
+#else
 static const cookie_io_functions_t io_funcs = {
 	.write = log_write,
 };
+#endif
 
 static void silence_error_handler(const char *file, int line,
 		const char *function, int err, const char *fmt, ...)
@@ -1047,7 +1057,11 @@
 
 	state->card = ensure_card(state->card_index, state->open_ucm, state->is_split_parent);
 
+#ifdef __DragonFly__
+	state->log_file = funopen(state, NULL, log_write_funopen, NULL, NULL);
+#else
 	state->log_file = fopencookie(state, "w", io_funcs);
+#endif
 	if (state->log_file == NULL) {
 		spa_log_error(state->log, "can't create log file");
 		return -errno;
