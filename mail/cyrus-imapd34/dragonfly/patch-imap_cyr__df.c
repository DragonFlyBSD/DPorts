--- imap/cyr_df.c.orig	2020-10-04 23:31:24 UTC
+++ imap/cyr_df.c
@@ -49,7 +49,15 @@
 #include <stdio.h>
 #include <sysexits.h>
 #include "string.h"
+#ifdef __DragonFly__
+/* XXX uuid_t name conflict <sys/uuid.h> vs "uuid/uuid.h" from libuuid from ports */
+#define uuid_t dfly_uuid_t
+#include <sys/uuid.h>
 #include <sys/statvfs.h>
+#undef uuid_t
+#else
+#include <sys/statvfs.h>
+#endif
 #include <sys/types.h>
 
 #include "global.h"
