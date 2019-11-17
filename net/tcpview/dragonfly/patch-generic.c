--- generic.c.orig	1993-04-22 20:40:02 UTC
+++ generic.c
@@ -42,6 +42,9 @@ for writing other simple filters. */
 
 #include <stdio.h>
 #include <sys/types.h>
+#include <netinet/in.h>
+
+int hexread(void *, int);
 
 int PrintFrames = 0;
 
