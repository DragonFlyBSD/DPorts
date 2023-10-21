--- src/occtl/occtl.c.orig	2023-06-16 17:01:03 UTC
+++ src/occtl/occtl.c
@@ -257,7 +257,7 @@ static int handle_help_cmd(CONN_TYPE * conn, const cha
 static int handle_reset_cmd(CONN_TYPE * conn, const char *arg, cmd_params_st *params)
 {
 	rl_reset_terminal(NULL);
-#ifdef HAVE_ORIG_READLINE
+#if defined(HAVE_ORIG_READLINE) && !defined(__FreeBSD__)
 	rl_reset_screen_size();
 #endif
 
