--- changetodir.c.orig	2002-04-17 08:45:10 UTC
+++ changetodir.c
@@ -44,6 +44,8 @@
 #include <syslog.h>
 #include <sys/stat.h>
 #include <sys/types.h>
+#include <string.h> /* for strerror() */
+#include <stdlib.h> /* for free() */
 #include <unistd.h>
 
 #include <bbftpd.h>
