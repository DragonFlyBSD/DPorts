--- src/test/tests.c.orig	2021-06-13 13:29:31.205145000 +0200
+++ src/test/tests.c	2021-06-13 13:29:53.619958000 +0200
@@ -6,7 +6,7 @@
 #include "env-util.h"
 #include "tests.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define program_invocation_short_name getprogname()
 #endif
 
