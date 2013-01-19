--- cdb_seek.c.orig	2013-01-19 10:40:00.910379000 +0100
+++ cdb_seek.c	2013-01-19 10:59:45.742034000 +0100
@@ -1,6 +1,5 @@
 #include <sys/types.h>
 #include <errno.h>
-extern int errno;
 #include "cdb.h"
 
 #ifndef SEEK_SET
