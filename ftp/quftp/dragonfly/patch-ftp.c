--- ftp.c.intermediate	2017-11-06 11:17:08.000000000 +0200
+++ ftp.c
@@ -5,6 +5,9 @@
 */
 
 #define _XOPEN_SOURCE 500
+#if defined(__DragonFly__)
+#define __BSD_VISIBLE 1 /* for h_addr */
+#endif
 
 #include <stdlib.h>
 #include <stdio.h>
