--- common/regexpr.c.orig	1995-05-09 08:06:46 UTC
+++ common/regexpr.c
@@ -23,6 +23,8 @@
  * regular-expression syntax might require a total rethink.
  */
 #include <stdio.h>
+#include <stdlib.h> /* for malloc() */
+#include <string.h> /* for strlen() */
 
 #include "regexpr.h"
 
@@ -198,7 +200,9 @@ regexpr *reg_compile(char *exp)
 	register char *longest;
 	register int len;
 	int flags;
+#if !defined(__DragonFly__)
 	extern char *malloc();
+#endif
 
 	if (exp == NULL)
 		FAIL("NULL argument");
