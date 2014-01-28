
$FreeBSD: games/uhexen/files/patch-include::h2def.h 340725 2014-01-22 17:40:44Z mat $

--- include/h2def.h	2003/02/10 14:43:33	1.1
+++ include/h2def.h	2003/02/10 14:46:37
@@ -26,7 +26,11 @@
 
 /* XXX ifdefs */
 
+#ifndef __FreeBSD__
 typedef unsigned int uint;
+#else
+#include <sys/types.h>
+#endif
 
 // Uncomment, to enable all timebomb stuff
 //#define TIMEBOMB
