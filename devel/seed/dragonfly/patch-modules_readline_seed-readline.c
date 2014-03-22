--- modules/readline/seed-readline.c.orig	2010-08-30 21:37:39.000000000 +0000
+++ modules/readline/seed-readline.c
@@ -77,7 +77,7 @@ seed_readline_bind(SeedContext ctx,
   key = seed_value_to_string(ctx, arguments[0], exception);
   c = seed_make_rl_closure((SeedObject) arguments[1]);
 
-  rl_bind_key(*key, (Function *) c);
+  rl_bind_key(*key, (rl_hook_func_t *) c);
 
   g_free(key);
 
