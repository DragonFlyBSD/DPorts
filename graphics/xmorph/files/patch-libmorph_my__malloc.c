
$FreeBSD: ports/graphics/xmorph/files/patch-libmorph_my__malloc.c,v 1.2 2012/11/17 05:58:26 svnexp Exp $

--- libmorph/my_malloc.c.orig	Sat Jun  7 16:35:29 2003
+++ libmorph/my_malloc.c	Sat Jun  7 16:35:43 2003
@@ -34,7 +34,7 @@
 
 #if defined(apollo) || defined(__CYGWIN32__)
 #else
-#include <malloc.h>
+#include <stdlib.h>
 #endif
 
 
