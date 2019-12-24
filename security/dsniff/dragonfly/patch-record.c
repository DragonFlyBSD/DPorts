--- record.c.intermediate	2019-12-24 17:00:01.000000000 +0000
+++ record.c
@@ -14,7 +14,14 @@
 
 #include <stdio.h>
 #include <time.h>
+#ifdef __DragonFly__
+#include <openssl/md5.h>
+#define MD5Init MD5_Init
+#define MD5Update MD5_Update
+#define MD5Final MD5_Final
+#else
 #include <md5.h>
+#endif
 #ifdef HAVE_DB_185_H
 #define DB_LIBRARY_COMPATIBILITY_API
 #include <db_185.h>
