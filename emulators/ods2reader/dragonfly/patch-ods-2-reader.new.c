--- ods-2-reader.new.c.intermediate	2019-11-08 20:48:08.000000000 +0000
+++ ods-2-reader.new.c
@@ -54,6 +54,9 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdarg.h>
+#include <string.h>
+#include <fcntl.h>
+#include <unistd.h>
 
 #ifdef VMS
 #ifdef __ALPHA
