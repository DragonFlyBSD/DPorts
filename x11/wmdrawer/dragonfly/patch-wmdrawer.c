--- wmdrawer.c.orig	2005-11-17 13:55:00 UTC
+++ wmdrawer.c
@@ -20,6 +20,7 @@
 
 #include <unistd.h>
 #include <sys/types.h>
+#include <sys/select.h>
 #include <sys/wait.h>
 #include <time.h>
 #include <signal.h>
