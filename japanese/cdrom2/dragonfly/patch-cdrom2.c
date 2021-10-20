--- cdrom2.c.orig	1996-06-29 16:25:21 UTC
+++ cdrom2.c
@@ -14,6 +14,8 @@
 #include <ctype.h>
 #include <string.h>
 #include <fcntl.h>
+#include <unistd.h>	/* for lseek() */
+#include <stdlib.h>
 #include <setjmp.h>
 #ifdef  MSC
 #include <sys/types.h>
