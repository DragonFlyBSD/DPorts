--- source/darkplaces/sys_linux.c.orig	2017-04-01 11:26:58 UTC
+++ source/darkplaces/sys_linux.c
@@ -8,6 +8,7 @@
 #include <unistd.h>
 #include <fcntl.h>
 #include <time.h>
+#include <sys/select.h>
 #endif
 
 #include <signal.h>
