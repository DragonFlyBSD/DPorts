--- sendafile.c.orig	2013-02-07 10:46:27 UTC
+++ sendafile.c
@@ -68,6 +68,7 @@
 #include <sys/stat.h>
 #include <sys/time.h>
 #include <sys/types.h>
+#include <sys/socket.h> /* for send() */
 #include <unistd.h>
 #include <stdlib.h>
 
