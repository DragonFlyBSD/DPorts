--- pipewire-alsa/alsa-plugins/pcm_pipewire.c.orig	2023-10-06 09:37:06 UTC
+++ pipewire-alsa/alsa-plugins/pcm_pipewire.c
@@ -1136,7 +1136,6 @@ static const struct pw_core_events core_
 	.error = on_core_error,
 };
 
-
 static ssize_t log_write(void *cookie, const char *buf, size_t size)
 {
 	int len;
@@ -1151,9 +1150,11 @@ static ssize_t log_write(void *cookie, c
 	return size;
 }
 
+#ifndef __DragonFly__
 static cookie_io_functions_t io_funcs = {
 	.write = log_write,
 };
+#endif
 
 static int execute_match(void *data, const char *location, const char *action,
                 const char *val, size_t len)
@@ -1180,7 +1181,12 @@ static int snd_pcm_pipewire_open(snd_pcm
 	pw->props = props;
 	pw->fd = -1;
 	pw->io.poll_fd = -1;
+#ifdef __DragonFly__
+	pw->log_file = funopen(pw, NULL, log_write, NULL, NULL);
+#else
 	pw->log_file = fopencookie(pw, "w", io_funcs);
+#endif
+	
 	if (pw->log_file == NULL) {
 		pw_log_error("can't create log file: %m");
 		err = -errno;
