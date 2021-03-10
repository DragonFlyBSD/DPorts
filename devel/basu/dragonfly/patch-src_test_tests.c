--- src/test/tests.c.orig	2021-01-06 13:56:51 UTC
+++ src/test/tests.c
@@ -6,7 +6,7 @@
 #include "env-util.h"
 #include "tests.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 const char *program_invocation_short_name = "unknown";
 #endif
 
