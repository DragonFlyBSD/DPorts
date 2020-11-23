--- calma/CalmaWrite.c.orig	2010-12-22 16:28:28 UTC
+++ calma/CalmaWrite.c
@@ -23,6 +23,7 @@ static char rcsid[] __attribute__ ((unus
 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>
+#include <arpa/inet.h>
 #include <sys/types.h>
 #ifdef	SYSV
 #include <time.h>
