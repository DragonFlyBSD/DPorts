--- ckufio.c.orig	2016-02-17 01:54:32 UTC
+++ ckufio.c
@@ -255,7 +255,9 @@ extern long timezone;
 #include <sys/stat.h>
 #endif /* CIE */
 
-
+#ifdef __DragonFly__
+#include <sys/wait.h>  /* for wait() */
+#endif
 
 /* Macro to alleviate isdir() calls internal to this module */
 
