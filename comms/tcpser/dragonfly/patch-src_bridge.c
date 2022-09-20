--- src/bridge.c.orig	2021-04-25 13:47:46 UTC
+++ src/bridge.c
@@ -3,6 +3,7 @@
 #include <sys/socket.h> // for recv...
 #include <unistd.h>     // for read...
 #include <stdlib.h>     // for exit...
+#include <stdint.h>
 #include <sys/param.h>
 #include <sys/time.h>
 #include <pthread.h>
@@ -215,7 +216,7 @@ int spawn_ctrl_thread(modem_config *cfg)
   pthread_t thread_id;
 
   rc = pthread_create(&thread_id, NULL, ctrl_thread, (void *) cfg);
-  LOG(LOG_ALL, "CTRL thread ID=%d", (int) thread_id);
+  LOG(LOG_ALL, "CTRL thread ID=%ju", (uintmax_t) thread_id);
 
   if (rc < 0) {
     ELOG(LOG_FATAL, "CTRL thread could not be started");
@@ -231,7 +232,7 @@ int spawn_ip_thread(modem_config *cfg)
 
 
   rc = pthread_create(&thread_id, NULL, ip_thread, (void *) cfg);
-  LOG(LOG_ALL, "IP thread ID=%d", (int) thread_id);
+  LOG(LOG_ALL, "IP thread ID=%ju", (uintmax_t) thread_id);
 
   if (rc < 0) {
     ELOG(LOG_FATAL, "IP thread could not be started");
