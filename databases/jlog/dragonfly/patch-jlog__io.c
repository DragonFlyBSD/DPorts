# use of 'u_int32_t' and other BerkeleyDB/nvi fixed types (_XOPEN_SOURCE)

--- jlog_io.c.intermediate	2019-11-12 13:29:15.000000000 +0000
+++ jlog_io.c
@@ -34,7 +34,6 @@
  * We want the single unix spec, so this define is needed on
  * the identity crisis that is Linux. pread()/pwrite()
  */
-#define _XOPEN_SOURCE 500
 
 #include "jlog_config.h"
 #include "jlog_hash.h"
