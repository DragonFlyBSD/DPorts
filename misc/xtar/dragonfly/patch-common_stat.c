--- common/stat.c.orig	1995-05-09 08:06:46 UTC
+++ common/stat.c
@@ -19,6 +19,7 @@
  */
 
 #include <sys/stat.h>		/* For struct stat        */
+#include <sys/types.h>		/* For ushort */
 #include <time.h>		/* For time_t             */
 
 #ifndef	S_ISDIR
