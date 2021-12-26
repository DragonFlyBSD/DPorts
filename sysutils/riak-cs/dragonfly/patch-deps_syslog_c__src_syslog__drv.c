--- deps/syslog/c_src/syslog_drv.c.orig	2015-10-14 17:21:06 UTC
+++ deps/syslog/c_src/syslog_drv.c
@@ -25,6 +25,7 @@ SOFTWARE, EVEN IF ADVISED OF THE POSSIBI
 #include <syslog.h>
 #include <stdarg.h>
 #include <string.h>
+#include <netinet/in.h> /* for ntohl */
 
 #include <ei.h>
 #include <erl_driver.h>
