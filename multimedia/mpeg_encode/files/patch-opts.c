
$FreeBSD: multimedia/mpeg_encode/files/patch-opts.c 340725 2014-01-22 17:40:44Z mat $

--- opts.c	2002/10/21 11:32:56	1.1
+++ opts.c	2002/10/21 11:33:04
@@ -37,9 +37,10 @@
 
 #include <stdio.h>
 #include <string.h>
-#include "opts.h"
 #include <malloc.h>
 #include <math.h>
+
+#include "opts.h"
 
 /*==============*
  * EXTERNALS    *
