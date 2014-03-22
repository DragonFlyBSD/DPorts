--- test-oop.c.orig	2003-08-07 15:29:49.000000000 +0000
+++ test-oop.c
@@ -180,7 +180,7 @@ static void *stop_readline(oop_source *s
 static void add_readline(oop_source *src) {
 	rl_callback_handler_install(
 		(char *) "> ", /* readline isn't const-correct */
-		(VFunction *) on_readline);
+		(rl_vcpfunc_t *) on_readline);
 	oop_readline_register(src);
 	src->on_signal(src,SIGQUIT,stop_readline,NULL);
 }
