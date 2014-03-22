--- dico/shell.c.orig	2012-01-10 20:12:04.000000000 +0000
+++ dico/shell.c
@@ -600,7 +600,7 @@ shell_init(struct init_script *p)
 #ifdef WITH_READLINE
     if (interactive) {
 	rl_readline_name = dico_program_name;
-	rl_attempted_completion_function = (CPPFunction*) _command_completion;
+	rl_attempted_completion_function = (rl_completion_func_t *) _command_completion;
 	read_history (get_history_file_name());
     } 
 #endif
