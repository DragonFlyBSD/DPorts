
$FreeBSD: head/games/uhexen/files/patch-include__h2def.h 363362 2014-07-29 17:12:47Z adamw $

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
