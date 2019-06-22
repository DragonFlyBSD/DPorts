--- sys_linux.c.orig	2011-03-31 18:14:20 UTC
+++ sys_linux.c
@@ -8,6 +8,7 @@
 #include <unistd.h>
 #include <fcntl.h>
 #include <time.h>
+#include <sys/select.h>
 #endif
 
 #include <signal.h>
