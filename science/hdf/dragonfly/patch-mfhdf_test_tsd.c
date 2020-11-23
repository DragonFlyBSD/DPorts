--- mfhdf/test/tsd.c.orig	2020-03-03 17:40:50 UTC
+++ mfhdf/test/tsd.c
@@ -15,6 +15,7 @@
  * tsd.c - tests SDstart for file with no write permission
 ****************************************************************************/
 
+#include <unistd.h> /* for unlink() */
 #include "mfhdf.h"
 
 #ifdef HDF
