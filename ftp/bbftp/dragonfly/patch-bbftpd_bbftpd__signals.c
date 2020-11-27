--- bbftpd/bbftpd_signals.c.intermediate	2020-11-23 12:55:40.000000000 +0000
+++ bbftpd/bbftpd_signals.c
@@ -34,6 +34,10 @@
 *****************************************************************************/
 #include <errno.h>
 #include <signal.h>
+#include <stdio.h>
+#include <stdlib.h>
+#include <string.h>
+#include <unistd.h>
 #include <sys/wait.h>
 #include <syslog.h>
 #include <netinet/in.h>
