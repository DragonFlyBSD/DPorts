--- hex.c.intermediate	2019-11-17 14:28:44 UTC
+++ hex.c
@@ -37,6 +37,8 @@ static char rcsid[] =
 #endif
 
 #include <stdio.h>
+#include <string.h>
+#include <ctype.h>
 
 static int hatoi();
 int hexread();
