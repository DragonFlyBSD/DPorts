--- cli/complete.c.orig	2007-08-22 14:44:46.000000000 +0000
+++ cli/complete.c
@@ -126,6 +126,6 @@ void initialize_readline (void)
     rl_readline_name = "gretl";
 
     /* Tell the completer that we want a crack first. */
-    rl_attempted_completion_function = (CPPFunction *) gretl_completion;
+    rl_attempted_completion_function = (rl_completion_func_t *) gretl_completion;
 }
 
