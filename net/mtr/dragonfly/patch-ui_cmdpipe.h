--- ui/cmdpipe.h.orig	2020-09-24 08:26:14 UTC
+++ ui/cmdpipe.h
@@ -20,6 +20,7 @@
 #define CMDPIPE_H
 
 #include "mtr.h"
+#include <sys/types.h> /* for pid_t */
 
 #define COMMAND_BUFFER_SIZE 4096
 #define PACKET_REPLY_BUFFER_SIZE 4096
