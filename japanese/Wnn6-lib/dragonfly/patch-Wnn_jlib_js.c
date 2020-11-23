--- Wnn/jlib/js.c.intermediate	2020-11-23 18:30:50.000000000 +0000
+++ Wnn/jlib/js.c
@@ -160,7 +160,14 @@ extern	Variables
 */
 
 
+#if defined(__DragonFly__)
+#include <stdlib.h>
+#include <string.h>
+#include <unistd.h>
+#include <arpa/inet.h>
+#else
 extern	char	*malloc();
+#endif
 
 #include <stdio.h>
 #include <ctype.h>
@@ -204,8 +211,9 @@ extern int errno;
 #include "../etc/fi_bdic.c"
 #include "../etc/pwd.c"
 
-
+#if !defined(__DragonFly__)
 char *malloc();
+#endif
 
 typedef struct _host_address {
     int address_len;
