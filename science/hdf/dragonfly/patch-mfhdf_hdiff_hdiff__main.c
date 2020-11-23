--- mfhdf/hdiff/hdiff_main.c.orig	2020-03-03 17:40:50 UTC
+++ mfhdf/hdiff/hdiff_main.c
@@ -17,6 +17,7 @@
 #include <string.h>
 #include <ctype.h>
 #include <stdlib.h>
+#include <unistd.h> /* for getopt() */
 #include "hdf.h"
 #include "hfile.h"
 #include "mfhdf.h"
