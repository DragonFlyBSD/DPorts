--- logrotate.c.orig	2017-10-12 15:19:41 UTC
+++ logrotate.c
@@ -1,8 +1,5 @@
 #include "queue.h"
 /* alloca() is defined in stdlib.h in NetBSD */
-#ifndef __NetBSD__
-#include <alloca.h>
-#endif
 #include <limits.h>
 #include <ctype.h>
 #include <dirent.h>
