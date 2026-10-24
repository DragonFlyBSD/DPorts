--- lib/readline/terminal.c.orig	2025-06-11 15:05:41 UTC
+++ lib/readline/terminal.c
@@ -580,7 +580,7 @@ _rl_init_terminal_io (const char *terminal_name)
     term = "dumb";
 
   _rl_term_isansi = RL_ANSI_TERM_DEFAULT;
-  dumbterm = STREQ (term, "dumb") || STREQ (term, "vt52") || STREQ (term, "adm3a");
+  dumbterm = STREQ (term, "dumb") || STREQ (term, "vt52") || STREQ (term, "adm3a") || STREQ (term, "cons25");
   if (dumbterm)
     _rl_term_isansi = 0;
