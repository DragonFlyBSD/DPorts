--- sic.c.orig	2013-06-16 06:03:32 UTC
+++ sic.c
@@ -6,6 +6,7 @@
 #include <stdlib.h>
 #include <string.h>
 #include <time.h>
+#include <sys/select.h>
 #include <unistd.h>
 
 static char *host = "irc.oftc.net";
