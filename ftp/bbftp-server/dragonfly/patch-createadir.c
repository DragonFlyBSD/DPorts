--- createadir.c.orig	2002-04-17 08:45:10 UTC
+++ createadir.c
@@ -43,6 +43,7 @@
 #include <fcntl.h>
 #include <netinet/in.h>
 #include <stdio.h>
+#include <string.h> /* for strerror() */
 #include <syslog.h>
 #include <sys/stat.h>
 #include <sys/types.h>
