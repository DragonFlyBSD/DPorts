
$FreeBSD: ports/x11-fonts/gfe/files/patch-src_bdf.c,v 1.2 2012/11/17 06:03:28 svnexp Exp $

--- src/bdf.c.orig	Tue Jun 27 12:36:09 2000
+++ src/bdf.c	Sat Nov 30 02:04:14 2002
@@ -18,7 +18,8 @@
 #include <gtk/gtk.h>
 
 #include <ctype.h>
-#include <malloc.h>
+#include <stdlib.h>
+#include <string.h>
 
 #include "auxil.h"
 #include "bdf.h"
