--- src/tools/pgproto/read.c.orig	2019-05-15 07:08:04 UTC
+++ src/tools/pgproto/read.c
@@ -23,6 +23,7 @@
 #include <string.h>
 #include <errno.h>
 #include <arpa/inet.h>
+#include <sys/select.h>
 #include "pgproto/fe_memutils.h"
 #include <libpq-fe.h>
 #include "pgproto/read.h"
