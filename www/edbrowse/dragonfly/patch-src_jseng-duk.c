--- src/jseng-duk.c.intermediate	2018-04-27 14:59:08 UTC
+++ src/jseng-duk.c
@@ -26,11 +26,7 @@ Exit codes are as follows:
 
 #include "eb.h"
 
-#if !defined(__FreeBSD__)
-#include <malloc.h>
-#else
 #include <stdlib.h>
-#endif
 
 #ifdef DOSLIKE
 #include "vsprtf.h"
