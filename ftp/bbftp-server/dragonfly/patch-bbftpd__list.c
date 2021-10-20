--- bbftpd_list.c.orig	2003-03-11 12:36:13 UTC
+++ bbftpd_list.c
@@ -42,6 +42,7 @@
 #include <sys/stat.h>
 #include <sys/types.h>
 #include <utime.h>
+#include <stdlib.h> /* for free() */
 
 #include <bbftpd.h>
 #include <common.h>
