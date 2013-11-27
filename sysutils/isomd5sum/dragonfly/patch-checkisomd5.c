--- checkisomd5.c.orig	2012-03-09 19:51:31.000000000 +0000
+++ checkisomd5.c
@@ -23,6 +23,7 @@
 #include <string.h>
 #include <popt.h>
 #include <termios.h>
+#include <sys/select.h>
 
 #include "md5.h"
 #include "libcheckisomd5.h"
