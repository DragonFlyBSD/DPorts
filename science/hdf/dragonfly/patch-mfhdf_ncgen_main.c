--- mfhdf/ncgen/main.c.orig	2020-03-03 17:40:50 UTC
+++ mfhdf/ncgen/main.c
@@ -7,6 +7,7 @@
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
+#include <unistd.h> /* for getopt() */
 
 #ifdef __hpux
 #include <locale.h>
