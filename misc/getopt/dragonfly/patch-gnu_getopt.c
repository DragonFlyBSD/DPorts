For strcmp(), strncmp(), strlen() visibility.

--- gnu/getopt.c.orig	2014-11-19 21:39:47 UTC
+++ gnu/getopt.c
@@ -69,6 +69,10 @@
 #include <unistd.h>
 #endif	/* GNU C library.  */
 
+#ifdef __DragonFly__
+#include <string.h>
+#endif
+
 #ifdef VMS
 #include <unixlib.h>
 #if HAVE_STRING_H - 0
