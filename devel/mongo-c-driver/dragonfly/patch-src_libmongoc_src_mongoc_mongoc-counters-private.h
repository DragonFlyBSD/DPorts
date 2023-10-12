--- src/libmongoc/src/mongoc/mongoc-counters-private.h.orig	2023-01-03 15:52:22 UTC
+++ src/libmongoc/src/mongoc/mongoc-counters-private.h
@@ -31,6 +31,7 @@
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #include <sys/param.h>
+#include <sys/sched.h>
 #elif defined(__hpux__)
 #include <sys/pstat.h>
 #endif
