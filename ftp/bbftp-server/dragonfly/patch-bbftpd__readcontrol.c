--- bbftpd_readcontrol.c.orig	2013-02-07 10:46:27 UTC
+++ bbftpd_readcontrol.c
@@ -44,6 +44,7 @@
 #include <syslog.h>
 #include <utime.h>
 #include <sys/types.h>
+#include <sys/stat.h> /* for umask() */
 #include <unistd.h>
 #if HAVE_STRING_H
 # include <string.h>
