--- src/getsdir.h.orig	2009-12-12 15:47:47.000000000 +0000
+++ src/getsdir.h
@@ -23,6 +23,9 @@
  */
 
 #include <dirent.h>
+#include <sys/syslimits.h>
+
+#define MAXNAMLEN	NAME_MAX
 
 typedef struct dirEntry {		/* structure of data item */
   char fname[MAXNAMLEN + 1];		/* filename + terminating null */
