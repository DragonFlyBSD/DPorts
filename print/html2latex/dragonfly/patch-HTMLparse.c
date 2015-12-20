--- HTMLparse.c.intermediate	2015-12-18 18:41:10.000000000 +0200
+++ HTMLparse.c
@@ -43,6 +43,7 @@ struct timezone Tz;
 #include <ctype.h>
 /* To get atoi. */
 #include <stdlib.h>
+#include <string.h>
 
 #include "HTMLparse.h"
 
