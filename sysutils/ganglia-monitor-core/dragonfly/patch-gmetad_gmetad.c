--- gmetad/gmetad.c.orig	2015-07-01 19:49:35 UTC
+++ gmetad/gmetad.c
@@ -1,5 +1,6 @@
 #include <stdio.h>
 #include <stdlib.h>
+#include <stdint.h>
 #include <signal.h>
 #include <pthread.h>
 #include <sys/types.h>
@@ -433,7 +434,7 @@ main ( int argc, char *argv[] )
          root.stringslen += strlen(root.strings) + 1;
       }
 
-   rand_seed = apr_time_now() * (int)pthread_self();
+   rand_seed = apr_time_now() * (int)(uintptr_t)pthread_self();
    for(i = 0; i < root.stringslen; rand_seed = rand_seed * root.strings[i++]);
 
    /* Debug level 1 is error output only, and no daemonizing. */
