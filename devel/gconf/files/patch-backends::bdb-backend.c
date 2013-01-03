
$FreeBSD: ports/devel/gconf/files/patch-backends::bdb-backend.c,v 1.3 2012/11/17 05:55:44 svnexp Exp $

--- backends/bdb-backend.c	2001/08/02 17:59:13	1.1
+++ backends/bdb-backend.c	2001/08/02 18:03:23
@@ -25,10 +25,9 @@
 #include <gconf/gconf-internals.h>
 #include <gconf/gconf.h>
 
+#include "config.h"
 #include "bdb.h"
 #include "dir-utils.h"
-
-#include <db.h>
 
 #include <stdio.h>
 #include <time.h>
