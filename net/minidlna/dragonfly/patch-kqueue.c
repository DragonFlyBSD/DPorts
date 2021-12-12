--- kqueue.c.orig	2021-03-19 06:31:03 UTC
+++ kqueue.c
@@ -35,6 +35,8 @@
 #include <string.h>
 #include <unistd.h>
 
+#include <sys/time.h>
+
 #include "event.h"
 #include "log.h"
 
