--- print.c.intermediate	2020-11-23 06:24:58.000000000 +0000
+++ print.c
@@ -37,6 +37,7 @@ static char rcsid[] =
 #endif
 
 #include <stdarg.h>
+#include <string.h>
 
 extern char *StrPtr;
 extern void *Xfile;
