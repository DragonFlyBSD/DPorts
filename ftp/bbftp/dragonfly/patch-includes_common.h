--- includes/common.h.orig	2003-03-12 12:29:40 UTC
+++ includes/common.h
@@ -31,6 +31,14 @@
 
 *****************************************************************************/

+#include <sys/socket.h> /* accept et all*/
+#include <string.h> /* strlen et al */
+#include <stdio.h> /* sprintf et al */
+#include <stdlib.h> /* free et al */
+#include <unistd.h>
+#include <arpa/inet.h>
+#include <ctype.h> /* isalpha et al */
+
 /* COMPRESSION and NOCOMPRESSION :
 **		Often used in routine call (more readable than 0 or 1)
 */
