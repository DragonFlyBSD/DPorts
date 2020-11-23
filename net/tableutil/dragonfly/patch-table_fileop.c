--- table_fileop.c.orig	2005-08-26 18:30:24 UTC
+++ table_fileop.c
@@ -21,6 +21,7 @@
 #include <unistd.h>
 #include <zlib.h>
 #include <sys/types.h>
+#include <arpa/inet.h>
 #include <ctype.h>
 
 #include "table_parse.h"
