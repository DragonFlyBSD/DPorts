--- mfhdf/libsrc/file.c.orig	2020-03-03 17:40:50 UTC
+++ mfhdf/libsrc/file.c
@@ -22,6 +22,7 @@
 
 #include    <string.h>
 #include    <errno.h>
+#include    <unistd.h> /* for access() */
 #include    "local_nc.h"
 #include    "alloc.h"
 #include    "herr.h"
