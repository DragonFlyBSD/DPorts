Compiled with -D_POSIX_C_SOURCE=200112L -D_XOPEN_SOURCE=600

--- src/library/tools/tune/fileio.h.orig	2016-01-05 17:04:55 UTC
+++ src/library/tools/tune/fileio.h
@@ -40,8 +40,9 @@ typedef unsigned int TYPECRC;
 typedef  unsigned __int64 POSFILE;
 #else
 #include <sys/types.h>
+#include <stdint.h>
 
-typedef u_int64_t POSFILE;
+typedef uint64_t POSFILE;
 #endif
 
 typedef struct HfInfo
