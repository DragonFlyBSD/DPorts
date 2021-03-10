--- bbftpd_signals.c.intermediate	2021-03-10 08:13:02.000000000 +0000
+++ bbftpd_signals.c
@@ -43,6 +43,7 @@
 #include <syslog.h>
 #include <netinet/in.h>
 #include <sys/socket.h>
+#include <unistd.h> /* for getpid() */
 #if TIME_WITH_SYS_TIME
 # include <sys/time.h>
 # include <time.h>
