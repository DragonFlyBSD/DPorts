--- procmap.c.orig	2016-07-15 10:22:00 UTC
+++ procmap.c
@@ -38,6 +38,8 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <fcntl.h>
+#include <unistd.h>	/* for lseek() */
+#include <string.h>
 #include <errno.h>
 
 /* The longest possible path is "/proc/curproc/map". */
