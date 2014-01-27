$FreeBSD: databases/rdfdb/files/patch-query-processQuery.c 340725 2014-01-22 17:40:44Z mat $

--- query/processQuery.c.orig	Mon Sep 18 17:09:01 2000
+++ query/processQuery.c	Thu Dec 27 21:18:54 2001
@@ -21,6 +21,7 @@
 #include "../utils/utils.h"
 #include "queryParser.h"
 #include <stdio.h>
+#include <time.h>
 extern int       DB_Flush (const char* db) ;
 extern int gVerbose;
 extern int gAssertionCount;
