--- RegExp.c.intermediate	2022-01-31 21:38:00.000000000 +0000
+++ RegExp.c
@@ -22,6 +22,7 @@
  * 	
  */ 
 
+#include <stdlib.h>
 #include "RegExp.h"
 
 void RegExpCompile(regexp,fsm_ptr)
