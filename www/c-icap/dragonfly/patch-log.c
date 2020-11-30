--- log.c.orig	2019-11-30 15:05:29 UTC
+++ log.c
@@ -21,6 +21,7 @@
 #include "c-icap.h"
 #include <stdio.h>
 #include <stdarg.h>
+#include <stdint.h>
 #include <time.h>
 #include "log.h"
 #include "util.h"
@@ -80,7 +81,7 @@ void log_server(ci_request_t * req, cons
     va_start(ap, format);
     if (default_logger) {
         if (MY_PROC_PID)
-            snprintf(prefix, 64, "%u/%u", (unsigned int)MY_PROC_PID, (unsigned int)ci_thread_self());
+            snprintf(prefix, 64, "%u/%ju", (unsigned int)MY_PROC_PID, (uintmax_t)ci_thread_self());
         else /*probably the main process*/
             strcpy(prefix, "main proc");
 
