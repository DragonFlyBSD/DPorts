--- signals_routines.c.orig	2013-02-07 10:46:27 UTC
+++ signals_routines.c
@@ -40,6 +40,7 @@
 #include <netinet/in.h>
 #include <sys/socket.h>
 #include <utime.h>
+#include <unistd.h> /* for getpid(), unlink() */
 #if HAVE_STRING_H
 # include <string.h>
 #endif
