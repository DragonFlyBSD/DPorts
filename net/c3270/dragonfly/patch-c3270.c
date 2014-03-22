--- c3270.c.orig	2013-01-12 07:38:08.000000000 +0000
+++ c3270.c
@@ -100,7 +100,7 @@ static void interact(void);
 static void stop_pager(void);
 
 #if defined(HAVE_LIBREADLINE) /*[*/
-static CPPFunction attempted_completion;
+static rl_completion_func_t attempted_completion;
 static char *completion_entry(const char *, int);
 #endif /*]*/
 
