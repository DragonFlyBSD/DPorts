--- slist.c.orig	1996-07-27 18:05:03.000000000 +0000
+++ slist.c
@@ -11,6 +11,7 @@
 
 #include "debug.h"
 
+#include <errno.h>
 #include <stdio.h>
 #include <sys/types.h>
 #include <sys/stat.h>
@@ -39,7 +40,6 @@ extern SCORES scores[NUMSCORES];
 extern SCORES old_scores[NUMSCORES];
 extern SCORES cur;
 
-extern int errno;
 
 extern int position;
 extern GAME_STATE game_state;
