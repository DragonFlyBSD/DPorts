--- src/bin2src.c.orig	2000-11-29 11:58:06 UTC
+++ src/bin2src.c
@@ -15,6 +15,7 @@
 #include <string.h>
 #include <ctype.h>
 #include <fcntl.h>
+#include <unistd.h>	/* for lseek() */
 #include <sys/types.h>
 #include "extipl.h"
 
