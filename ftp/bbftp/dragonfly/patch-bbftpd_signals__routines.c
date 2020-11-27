--- bbftpd/signals_routines.c.intermediate	2020-11-23 13:11:45.000000000 +0000
+++ bbftpd/signals_routines.c
@@ -31,6 +31,10 @@
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
