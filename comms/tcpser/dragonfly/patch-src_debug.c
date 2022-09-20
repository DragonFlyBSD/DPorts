--- src/debug.c.orig	2021-04-25 13:47:46 UTC
+++ src/debug.c
@@ -1,4 +1,5 @@
 #include <stdlib.h>     // for exit...
+#include <stdint.h>
 #include <time.h>
 #include <pthread.h>
 #include <stdio.h>
@@ -122,7 +123,7 @@ void log_start(int level)
     // we have the lock.
     now = time(NULL);
     strftime(t, 22, "%Y-%m-%d %H:%M:%S", localtime(&now));
-    fprintf(log_file, "%s:%5.5d:%s:", t, (int) pthread_self(), log_desc[level]);
+    fprintf(log_file, "%s:%5.5d:%s:", t, (int)(uintmax_t) pthread_self(), log_desc[level]);
     //free(t);
   }
 }
