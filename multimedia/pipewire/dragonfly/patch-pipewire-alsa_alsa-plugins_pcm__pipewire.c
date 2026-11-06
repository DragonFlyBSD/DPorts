--- pipewire-alsa/alsa-plugins/pcm_pipewire.c.orig
+++ pipewire-alsa/alsa-plugins/pcm_pipewire.c
@@ -1244,9 +1244,18 @@
 	return size;
 }
 
+#ifdef __DragonFly__
+/* funopen uses an int-sized write callback, unlike fopencookie. */
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
 
 static int execute_match(void *data, const char *location, const char *action,
                 const char *val, size_t len)
@@ -1273,7 +1282,11 @@
 	pw->props = props;
 	pw->fd = -1;
 	pw->io.poll_fd = -1;
+#ifdef __DragonFly__
+	pw->log_file = funopen(pw, NULL, log_write_funopen, NULL, NULL);
+#else
 	pw->log_file = fopencookie(pw, "w", io_funcs);
+#endif
 	if (pw->log_file == NULL) {
 		pw_log_error("can't create log file: %m");
 		err = -errno;
