--- common/file.c.orig	1995-05-09 08:06:46 UTC
+++ common/file.c
@@ -22,6 +22,7 @@
 #include <sys/stat.h>
 #include <sys/time.h>
 #include <stdio.h>
+#include <stdlib.h> /* for free(), malloc() */
 #include <string.h>
 #include <utime.h>
 #include <time.h>
