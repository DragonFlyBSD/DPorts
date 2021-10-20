--- bbftpd_message.c.orig	2013-02-07 10:46:27 UTC
+++ bbftpd_message.c
@@ -48,6 +48,7 @@
 #include <stdlib.h>
 
 #include <syslog.h>
+#include <sys/socket.h> /* for recv() */
 #if TIME_WITH_SYS_TIME
 # include <sys/time.h>
 # include <time.h>
