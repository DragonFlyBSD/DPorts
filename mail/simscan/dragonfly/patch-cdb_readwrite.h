--- cdb/readwrite.h.orig	1998-06-15 10:53:16 UTC
+++ cdb/readwrite.h
@@ -1,7 +1,6 @@
 #ifndef READWRITE_H
 #define READWRITE_H
 
-extern int read();
-extern int write();
+#include <unistd.h>
 
 #endif
