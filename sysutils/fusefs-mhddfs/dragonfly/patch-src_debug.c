--- src/debug.c.orig	2010-07-14 07:37:02 UTC
+++ src/debug.c
@@ -1,5 +1,6 @@
 #include <stdio.h>
 #include <stdarg.h>
+#include <stdint.h>
 #include <time.h>
 #include <pthread.h>
 #include "debug.h"
@@ -36,7 +37,7 @@ int mhdd_debug(int level, const char *fm
 		default:         fprintf(mhdd.debug, ": ");  break;
 	}
 
-	fprintf(mhdd.debug, "[%ld] ", pthread_self());
+	fprintf(mhdd.debug, "[%ju] ", (uintmax_t)pthread_self());
 
 	va_list ap;
 	va_start(ap, fmt);
