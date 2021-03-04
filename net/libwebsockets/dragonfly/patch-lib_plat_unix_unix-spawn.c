--- lib/plat/unix/unix-spawn.c.orig	1970-01-01 00:00:00 UTC
+++ lib/plat/unix/unix-spawn.c
@@ -444,7 +444,7 @@ lws_spawn_piped(const struct lws_spawn_p
 	if (lsp->info.disable_ctrlc)
 		/* stops non-daemonized main processess getting SIGINT
 		 * from TTY */
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		setpgid(0, 0);
 #else
 		setpgrp();
