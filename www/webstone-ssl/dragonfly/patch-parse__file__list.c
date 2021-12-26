--- src/parse_file_list.c.orig	1998-07-25 07:50:17 UTC
+++ src/parse_file_list.c
@@ -28,6 +28,7 @@
 #include <signal.h>
 #include <stdlib.h>
 #include <string.h>
+#include <ctype.h> /* for isspace() */
 
 #ifndef WIN32
 #include <netdb.h>
