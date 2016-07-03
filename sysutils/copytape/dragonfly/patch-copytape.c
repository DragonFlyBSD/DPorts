--- copytape.c.intermediate	2016-06-27 18:03:59 UTC
+++ copytape.c
@@ -36,7 +36,11 @@
 #include <sys/mtio.h>
 #include <sys/file.h>
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int      errno;
+#endif
 
 #define BUFLEN		(1024*1024)	/* max tape block size */
 #define TAPE_MARK	-100	/* return record length if we read a
