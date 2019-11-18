--- bgp.c.orig	1993-04-22 20:39:47 UTC
+++ bgp.c
@@ -36,11 +36,15 @@ static char rcsid[] =
 #endif
 
 #include <stdio.h>
+#include <stdlib.h>
+#include <ctype.h>
 #include <sys/types.h>
 #include <netinet/in.h>
 #include "os.h"
 #include "md.h"
 
+int hexread(void *, int);
+
 int PrintFrames = 0;
 
 #ifdef __STDC__
