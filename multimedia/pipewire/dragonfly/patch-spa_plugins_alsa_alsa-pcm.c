--- spa/plugins/alsa/alsa-pcm.c.orig	2022-12-09 10:28:24 UTC
+++ spa/plugins/alsa/alsa-pcm.c
@@ -460,9 +460,11 @@ static ssize_t log_write(void *cookie, c
 	return size;
 }
 
+#ifndef __DragonFly__
 static cookie_io_functions_t io_funcs = {
 	.write = log_write,
 };
+#endif
 
 int spa_alsa_init(struct state *state, const struct spa_dict *info)
 {
@@ -504,7 +506,11 @@ int spa_alsa_init(struct state *state, c
 		spa_log_error(state->log, "can't create card %u", state->card_index);
 		return -errno;
 	}
+#ifdef __DragonFly__
+	state->log_file = funopen(state, NULL, log_write, NULL, NULL);
+#else
 	state->log_file = fopencookie(state, "w", io_funcs);
+#endif
 	if (state->log_file == NULL) {
 		spa_log_error(state->log, "can't create log file");
 		return -errno;
