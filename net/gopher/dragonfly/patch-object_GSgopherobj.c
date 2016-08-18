--- object/GSgopherobj.c.intermediate	2016-08-18 16:53:36 UTC
+++ object/GSgopherobj.c
@@ -357,7 +357,9 @@
 
 #include "String.h"
 #include "STRstring.h"
+#ifndef __DragonFly__
 #include "Regex.h"
+#endif
 #include <stdio.h>
 #include "compatible.h"
 #include <errno.h>
