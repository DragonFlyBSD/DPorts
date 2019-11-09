--- src/pathexec_run.c.orig	2008-06-15 20:31:14 UTC
+++ src/pathexec_run.c
@@ -1,5 +1,6 @@
 /* Public domain. */
 
+#include <unistd.h>	/* for execve() */
 #include "error.h"
 #include "stralloc.h"
 #include "str.h"
