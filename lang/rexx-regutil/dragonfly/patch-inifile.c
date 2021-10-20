--- inifile.c.intermediate	2019-11-08 16:01:09.000000000 +0000
+++ inifile.c
@@ -25,6 +25,7 @@
 #include <string.h>
 #include <sys/stat.h>
 #include <fcntl.h>
+#include <unistd.h>	/* for ftruncate() */
 
 #include "inifile.h"
 
