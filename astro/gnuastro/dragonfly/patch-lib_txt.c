--- lib/txt.c.orig	2019-01-02 16:23:47 UTC
+++ lib/txt.c
@@ -22,6 +22,7 @@ along with Gnuastro. If not, see <http:/
 **********************************************************************/
 #include <config.h>
 
+#include <sys/select.h>
 #include <math.h>
 #include <ctype.h>
 #include <stdio.h>
