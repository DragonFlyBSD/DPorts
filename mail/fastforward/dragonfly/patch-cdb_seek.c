--- cdb_seek.c.orig	1998-05-19 18:25:42.000000000 +0200
+++ cdb_seek.c
@@ -1,6 +1,8 @@
 #include <sys/types.h>
 #include <errno.h>
+#ifndef __DragonFly__
 extern int errno;
+#endif
 #include "cdb.h"
 
 #ifndef SEEK_SET
