--- common/smtppass.c.orig	2008-06-30 17:01:31 UTC
+++ common/smtppass.c
@@ -49,6 +49,7 @@
 #include <ctype.h>
 #include <stdlib.h>
 #include <stdio.h>
+#include <stdint.h>
 #include <unistd.h>
 #include <fcntl.h>
 #include <syslog.h>
@@ -610,7 +611,7 @@ static spctx_t* init_thread(int fd)
                 g_unique_id++;
         sp_unlock();    
             
-        sp_messagex(ctx, LOG_DEBUG, "processing %d on thread %x", fd, (int)pthread_self());
+        sp_messagex(ctx, LOG_DEBUG, "processing %d on thread %jx", fd, (uintmax_t)pthread_self());
         
         /* Connect to the outgoing server ... */
         if(make_connections(ctx, fd) == -1)
@@ -727,7 +728,7 @@ cleanup:
         thread->fd = -1;
     sp_unlock();
 
-    return (void*)(ret == 0 ? 0 : 1);
+    return (void*)(uintptr_t)(ret == 0 ? 0 : 1);
 }
 
 static int make_connections(spctx_t* ctx, int client)
@@ -1890,7 +1891,7 @@ void sp_lock()
     if(r == EBUSY)
     {
         wait = 1;
-        sp_message(NULL, LOG_DEBUG, "thread will block: %d", pthread_self());
+        sp_message(NULL, LOG_DEBUG, "thread will block: %ju", (uintmax_t)pthread_self());
         r = pthread_mutex_lock(&g_mutex);
     }
 
@@ -1908,7 +1909,7 @@ void sp_lock()
 #ifdef _DEBUG
     else if(wait)
     {
-        sp_message(NULL, LOG_DEBUG, "thread unblocked: %d", pthread_self());
+        sp_message(NULL, LOG_DEBUG, "thread unblocked: %ju", (uintmax_t)pthread_self());
     }
 #endif    
 }
