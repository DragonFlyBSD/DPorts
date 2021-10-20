--- vncauth.c.orig	2005-12-09 06:37:41 UTC
+++ vncauth.c
@@ -24,6 +24,7 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
+#include <unistd.h>	/* for lseek() */
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <vncauth.h>
