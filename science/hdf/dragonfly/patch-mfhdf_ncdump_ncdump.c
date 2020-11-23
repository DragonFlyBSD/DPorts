--- mfhdf/ncdump/ncdump.c.orig	2020-03-03 17:40:50 UTC
+++ mfhdf/ncdump/ncdump.c
@@ -9,6 +9,7 @@
 #include <string.h>
 #include <ctype.h>
 #include <stdlib.h>
+#include <unistd.h> /* for getopt() */
 #include "local_nc.h"
 
 #include "ncdump.h"
