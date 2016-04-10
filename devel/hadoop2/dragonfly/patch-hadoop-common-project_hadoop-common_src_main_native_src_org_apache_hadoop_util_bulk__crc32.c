--- hadoop-common-project/hadoop-common/src/main/native/src/org/apache/hadoop/util/bulk_crc32.c.orig	2016-01-26 00:07:35 UTC
+++ hadoop-common-project/hadoop-common/src/main/native/src/org/apache/hadoop/util/bulk_crc32.c
@@ -38,7 +38,7 @@
 #include "bulk_crc32.h"
 #include "gcc_optimizations.h"
 
-#if (!defined(__FreeBSD__) && !defined(WINDOWS))
+#if (!defined(__FreeBSD__) && !defined(WINDOWS) && !defined __DragonFly__)
 #define USE_PIPELINED
 #endif
 
