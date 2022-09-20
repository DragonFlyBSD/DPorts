--- src/ip232.c.orig	2021-04-25 13:47:46 UTC
+++ src/ip232.c
@@ -1,5 +1,6 @@
 #include <sys/socket.h> // for recv...
 #include <stdlib.h>     // for exit...
+#include <stdint.h>
 #include <sys/file.h>
 #include <unistd.h>
 #include <termios.h>
@@ -75,7 +76,7 @@ int spawn_ip232_thread(modem_config *cfg
 
 
   rc = pthread_create(&thread_id, NULL, ip232_thread, (void *) cfg);
-  LOG(LOG_ALL, "ip232 thread ID=%d", (int) thread_id);
+  LOG(LOG_ALL, "ip232 thread ID=%ju", (uintmax_t) thread_id);
   if (rc < 0) {
     ELOG(LOG_FATAL, "ip232 thread could not be started");
     exit(-1);
