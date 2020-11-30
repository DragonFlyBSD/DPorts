--- src/bridge.c.intermediate	2020-11-29 12:37:41.000000000 +0000
+++ src/bridge.c
@@ -3,6 +3,7 @@
 #include <sys/socket.h>   // for recv...
 #include <unistd.h>       // for read...
 #include <stdlib.h>       // for exit...
+#include <stdint.h>
 #include <sys/param.h>
 #include <sys/time.h>
 #include <pthread.h>
@@ -205,7 +206,7 @@ int spawn_ctrl_thread(modem_config *cfg)
   pthread_t thread_id;
 
   rc=pthread_create(&thread_id,NULL,ctrl_thread,(void *)cfg);
-  LOG(LOG_ALL,"CTRL thread ID=%d",(int)thread_id);
+  LOG(LOG_ALL,"CTRL thread ID=%ju",(uintmax_t)thread_id);
 
   if(rc < 0) {
       ELOG(LOG_FATAL,"CTRL thread could not be started");
@@ -219,7 +220,7 @@ int spawn_ip_thread(modem_config *cfg) {
   pthread_t thread_id;
 
   rc=pthread_create(&thread_id,NULL,ip_thread,(void *)cfg);
-  LOG(LOG_ALL,"IP thread ID=%d",(int)thread_id);
+  LOG(LOG_ALL,"IP thread ID=%ju",(uintmax_t)thread_id);
 
   if(rc < 0) {
       ELOG(LOG_FATAL,"IP thread could not be started");
