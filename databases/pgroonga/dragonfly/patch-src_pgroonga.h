--- src/pgroonga.h.orig	2019-01-11 07:12:22 UTC
+++ src/pgroonga.h
@@ -1,5 +1,9 @@
 #pragma once
 
+#ifdef __DragonFly__
+#include <stdbool.h> /* for correct bool type */
+#endif
+
 #include <postgres.h>
 #include <fmgr.h>
 #include <utils/rel.h>
