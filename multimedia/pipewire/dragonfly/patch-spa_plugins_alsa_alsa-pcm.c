--- spa/plugins/alsa/alsa-pcm.c.orig	2025-06-13 16:36:49.370959000 +0200
+++ spa/plugins/alsa/alsa-pcm.c	2025-06-13 16:37:31.372050000 +0200
@@ -1028,7 +1028,11 @@ int spa_alsa_init(struct state *state, c
 
 	state->card = ensure_card(state->card_index, state->open_ucm, state->is_split_parent);
 
+#ifdef __DragonFly__
+	state->log_file = funopen(state, NULL, log_write, NULL, NULL);
+#else
 	state->log_file = fopencookie(state, "w", io_funcs);
+#endif
 	if (state->log_file == NULL) {
 		spa_log_error(state->log, "can't create log file");
 		return -errno;
