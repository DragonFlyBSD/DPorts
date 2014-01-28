
$FreeBSD: graphics/sodipodi/files/patch-src::xml::repr-io.c 340725 2014-01-22 17:40:44Z mat $

--- src/xml/repr-io.c	2001/11/22 15:20:50	1.1
+++ src/xml/repr-io.c	2001/11/22 15:21:18
@@ -1,6 +1,8 @@
 #define SP_REPR_IO_C
 
+#ifdef HAVE_MALLOC_H
 #include <malloc.h>
+#endif
 #include <string.h>
 #include <stdio.h>
 #include "repr.h"
