--- cdb/cdb.h.orig	1998-06-15 10:53:16 UTC
+++ cdb/cdb.h
@@ -1,6 +1,8 @@
 #ifndef CDB_H
 #define CDB_H
 
+#include <unistd.h>	/* for lseek() */
+
 #include "uint32.h"
 
 extern uint32 cdb_hash();
