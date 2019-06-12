--- child.c.orig	2014-04-18 07:08:58 UTC
+++ child.c
@@ -22,6 +22,7 @@
 #endif
 
 #include <unistd.h>
+#include <sys/select.h>
 #include <signal.h>
 #include <errno.h>
 #include <fcntl.h>
