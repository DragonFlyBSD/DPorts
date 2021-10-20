--- md4.c.orig	2003-06-17 12:50:47 UTC
+++ md4.c
@@ -24,6 +24,7 @@
 
    It assumes that a int is at least 32 bits long
 */
+#include <string.h>
 
 typedef unsigned int uint32;
 
