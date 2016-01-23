--- srs2.c.intermediate	2016-01-23 17:22:26.000000000 +0200
+++ srs2.c
@@ -21,7 +21,7 @@
 #include <sys/types.h>  /* tyepdefs */
 #include <sys/time.h>   /* timeval / timezone struct */
 #include <string.h>		/* memcpy, strcpy, memset */
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <stdlib.h>
 #else
 #  include <alloca.h>
