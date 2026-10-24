--- pipewire-alsa/alsa-plugins/pcm_pipewire.c.orig	2026-05-26 08:09:28 UTC
+++ pipewire-alsa/alsa-plugins/pcm_pipewire.c
@@ -1244,9 +1244,11 @@ static ssize_t log_write(void *cookie, const char *buf
 	return size;
 }
 
+#ifndef __DragonFly__
 static const cookie_io_functions_t io_funcs = {
 	.write = log_write,
 };
+#endif
 
 static int execute_match(void *data, const char *location, const char *action,
                 const char *val, size_t len)
@@ -1273,7 +1275,12 @@ static int snd_pcm_pipewire_open(snd_pcm_t **pcmp,
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
