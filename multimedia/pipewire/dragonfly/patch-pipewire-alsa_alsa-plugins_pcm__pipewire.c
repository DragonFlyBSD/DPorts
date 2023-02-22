--- pipewire-alsa/alsa-plugins/pcm_pipewire.c.orig	2022-12-09 10:28:24 UTC
+++ pipewire-alsa/alsa-plugins/pcm_pipewire.c
@@ -1094,7 +1094,6 @@ static const struct pw_core_events core_
 	.error = on_core_error,
 };
 
-
 static ssize_t log_write(void *cookie, const char *buf, size_t size)
 {
 	int len;
@@ -1109,9 +1108,11 @@ static ssize_t log_write(void *cookie, c
 	return size;
 }
 
+#ifndef __DragonFly__
 static cookie_io_functions_t io_funcs = {
 	.write = log_write,
 };
+#endif
 
 static int snd_pcm_pipewire_open(snd_pcm_t **pcmp,
 		struct params *p, snd_pcm_stream_t stream, int mode)
@@ -1168,7 +1169,11 @@ static int snd_pcm_pipewire_open(snd_pcm
 	pw->fd = -1;
 	pw->io.poll_fd = -1;
 	pw->flags = p->flags;
+#ifdef __DragonFly__
+	pw->log_file = funopen(pw, NULL, log_write, NULL, NULL);
+#else
 	pw->log_file = fopencookie(pw, "w", io_funcs);
+#endif
 	if (pw->log_file == NULL) {
 		pw_log_error("can't create log file: %m");
 		err = -errno;
