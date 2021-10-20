--- storeafile.c.orig	2013-02-07 10:46:27 UTC
+++ storeafile.c
@@ -71,6 +71,7 @@
 #include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>
+#include <sys/socket.h> /* for recv() */
 
 #include <bbftpd.h>
 #include <common.h>
