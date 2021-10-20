--- bbftpd_retr.c.orig	2013-02-07 10:46:27 UTC
+++ bbftpd_retr.c
@@ -44,6 +44,7 @@
 #include <syslog.h>
 #include <sys/stat.h>
 #include <sys/types.h>
+#include <sys/socket.h> /* for accept(), send() */
 #if TIME_WITH_SYS_TIME
 # include <sys/time.h>
 # include <time.h>
