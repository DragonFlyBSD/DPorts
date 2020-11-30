--- src/gwsocket.c.orig	2020-05-17 12:34:51 UTC
+++ src/gwsocket.c
@@ -31,6 +31,7 @@
 #include <stdio.h>
 #include <signal.h>
 #include <stdlib.h>
+#include <stdint.h>
 #include <string.h>
 #include <errno.h>
 #include <fcntl.h>
@@ -320,11 +321,11 @@ stop_ws_server (GWSWriter * gwswriter, G
 
   reader = gwsreader->thread;
   if (pthread_join (reader, NULL) != 0)
-    LOG (("Unable to join thread: %lu %s\n", reader, strerror (errno)));
+    LOG (("Unable to join thread: %ju %s\n", (uintmax_t)reader, strerror (errno)));
 
   writer = gwswriter->thread;
   if (pthread_join (writer, NULL) != 0)
-    LOG (("Unable to join thread: %lu %s\n", writer, strerror (errno)));
+    LOG (("Unable to join thread: %ju %s\n", (uintmax_t)writer, strerror (errno)));
 }
 
 /* Start the WebSocket server and initialize default options. */
