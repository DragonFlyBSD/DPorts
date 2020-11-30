--- lib/direct/signals.c.orig	2012-05-23 13:43:12 UTC
+++ lib/direct/signals.c
@@ -29,7 +29,7 @@
 #include <config.h>
 
 #include <pthread.h>
-
+#include <stdint.h>
 #include <signal.h>
 
 #include <stdlib.h>
@@ -79,7 +79,7 @@ static int sigs_to_handle[] = { /*SIGALR
 static DirectLink      *handlers = NULL;
 static pthread_mutex_t  handlers_lock;
 
-static pthread_t sighandler_thread = -1;
+static pthread_t sighandler_thread = (uintptr_t)-1;
 
 /**************************************************************************************************/
 
