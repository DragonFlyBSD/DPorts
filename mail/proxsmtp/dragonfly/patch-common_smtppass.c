--- common/smtppass.c.intermediate	2020-11-29 12:45:32.000000000 +0000
+++ common/smtppass.c
@@ -58,6 +58,7 @@
 #include <signal.h>
 #include <errno.h>
 #include <stdarg.h>
+#include <stdint.h>
 #include <pwd.h>
 #include <time.h>
 
@@ -669,7 +670,7 @@ static spctx_t* init_thread(int fd)
                 g_unique_id++;
         sp_unlock();
 
-        sp_messagex(ctx, LOG_DEBUG, "processing %d on thread %x", fd, (int)pthread_self());
+        sp_messagex(ctx, LOG_DEBUG, "processing %d on thread %jx", fd, (uintmax_t)pthread_self());
 
         /* Connect to the outgoing server ... */
         if(make_connections(ctx, fd) == -1)
