--- interface.h.intermediate 2019-11-17 14:25:59.000000000 +0000
+++ interface.h
@@ -30,10 +30,13 @@
 #include "os.h"			/* operating system stuff */
 #include "md.h"			/* machine dependent stuff */
 
-#ifndef __STDC__
-extern char *malloc();
-extern char *calloc();
-#endif
+#include <ctype.h>
+#include <stdio.h>
+#include <stdlib.h>
+#include <string.h>
+#include <unistd.h>
+
+extern int hexread(void *, int);
 
 extern int dflag;		/* print filter code */
 extern int eflag;		/* print ethernet header */
