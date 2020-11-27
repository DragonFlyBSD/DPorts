--- bbftpd/bbftpd_utils.c.orig	2003-03-11 12:34:36 UTC
+++ bbftpd/bbftpd_utils.c
@@ -31,6 +31,8 @@
             
 *****************************************************************************/
 #include <stdio.h>
+#include <stdlib.h>
+#include <string.h>
 
 extern char *curfilename ;
 extern char *realfilename ;
