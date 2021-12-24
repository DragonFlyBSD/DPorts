--- imap/global.c.orig	2020-10-05 04:16:02 UTC
+++ imap/global.c
@@ -48,7 +48,15 @@
 #include <ctype.h>
 #include <sysexits.h>
 #include <syslog.h>
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
 #include <netinet/in.h>
 #include <sys/stat.h>
