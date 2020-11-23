--- Wnn/jlib/js.c.intermediate	2020-11-23 19:04:34.000000000 +0000
+++ Wnn/jlib/js.c
@@ -158,6 +158,12 @@ extern	Variables
 	int	wnn_errorno;
 */
 
+#if defined(__DragonFly__)
+#include <stdlib.h>
+#include <string.h>
+#include <unistd.h>
+#include <arpa/inet.h>
+#endif
 
 #include <stdio.h>
 #include <stdlib.h>
