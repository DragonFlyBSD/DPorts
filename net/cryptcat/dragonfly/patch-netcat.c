--- netcat.c.intermediate	2020-11-22 08:10:17.000000000 +0000
+++ netcat.c
@@ -84,6 +84,7 @@
 #include <errno.h>
 #include <signal.h>
 #include <fcntl.h>		/* O_WRONLY et al */
+#include <unistd.h>		/* clost() alarm() sleep() getopt() et al */
 
 #ifdef LINUX
 #include <resolv.h>
