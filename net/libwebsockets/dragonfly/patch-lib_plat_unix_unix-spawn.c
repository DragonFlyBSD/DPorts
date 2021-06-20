--- lib/plat/unix/unix-spawn.c.orig	2021-06-19 21:53:55.714819000 +0200
+++ lib/plat/unix/unix-spawn.c	2021-06-19 21:54:36.273883000 +0200
@@ -461,7 +461,7 @@
 	if (lsp->info.disable_ctrlc)
 		/* stops non-daemonized main processess getting SIGINT
 		 * from TTY */
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
 		setpgid(0, 0);
 #else
 		setpgrp();
