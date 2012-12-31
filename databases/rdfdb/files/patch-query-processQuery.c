$FreeBSD: ports/databases/rdfdb/files/patch-query-processQuery.c,v 1.2 2012/11/17 05:55:23 svnexp Exp $

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
