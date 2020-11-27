--- deps/syslog/c_src/syslog_drv.c.orig	2015-10-14 15:42:11 UTC
+++ deps/syslog/c_src/syslog_drv.c
@@ -25,6 +25,7 @@ SOFTWARE, EVEN IF ADVISED OF THE POSSIBI
 #include <syslog.h>
 #include <stdarg.h>
 #include <string.h>
+#include <arpa/inet.h>
 
 #include <ei.h>
 #include <erl_driver.h>
