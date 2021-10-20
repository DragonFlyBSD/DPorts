--- bbftpd_utils.c.orig	2013-02-07 10:46:27 UTC
+++ bbftpd_utils.c
@@ -32,6 +32,7 @@
 *****************************************************************************/
 #include <bbftpd.h>
 #include <stdio.h>
+#include <stdlib.h> /* for free() */
 
 #if HAVE_STRING_H
 # include <string.h>
