For strcmp(), strncmp(), strlen() visibility.

--- lib/getopt.c.orig	2005-05-14 14:22:36 UTC
+++ lib/getopt.c
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
