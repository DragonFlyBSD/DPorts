--- modules/db_flatstore/flatstore.c.orig	2017-11-27 15:44:50 UTC
+++ modules/db_flatstore/flatstore.c
@@ -30,6 +30,7 @@
 #include <fcntl.h>
 #include <sys/types.h>
 #include <sys/stat.h>
+#include <sys/uio.h>	/* for writev() */
 #include <unistd.h>
 #include "../../mem/mem.h"
 #include "../../dprint.h"
