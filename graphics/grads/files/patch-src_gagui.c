$FreeBSD: head/graphics/grads/files/patch-src_gagui.c 340725 2014-01-22 17:40:44Z mat $

--- src/gagui.c.orig	Fri Mar 25 15:20:19 2005
+++ src/gagui.c	Fri Mar 25 15:20:47 2005
@@ -37,8 +37,8 @@
 
 #include <time.h>
 
-#include "libsx.h"		
-#include "freq.h"	
+#include "X11/libsx/libsx.h"		
+#include "X11/libsx/freq.h"	
 #include "grads.h"
 #include "gx.h"
 
