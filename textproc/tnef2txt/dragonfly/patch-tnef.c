--- tnef.c.orig	1997-07-23 00:15:59 UTC
+++ tnef.c
@@ -30,6 +30,8 @@
  ***************************************************************************/
 
 #include <stdio.h>
+#include <stdlib.h>
+#include <string.h>
 #include <sys/stat.h>
 #include "config.h"
 #include "tnef.h"
@@ -38,6 +40,8 @@
 
 #define VERSION "tnef2txt/1.3"
 
+int save_attach_data(char *title, uint8 *tsp, uint32 size);
+
 int Verbose = FALSE;
 int SaveData = FALSE;
 
