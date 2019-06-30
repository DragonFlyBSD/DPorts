--- console/ftp.c.orig	2019-02-21 11:11:36 UTC
+++ console/ftp.c
@@ -15,6 +15,7 @@
 #include <fcntl.h>
 #include <stdarg.h>
 #include <signal.h>
+#include <sys/select.h>
 
 #include "ftp.h"
 
