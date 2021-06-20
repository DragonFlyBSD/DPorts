--- spa/plugins/support/logger.c.orig	2021-06-10 16:57:32.482056000 +0200
+++ spa/plugins/support/logger.c	2021-06-10 16:58:02.671342000 +0200
@@ -37,7 +37,7 @@
 #include <spa/utils/type.h>
 #include <spa/utils/names.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define CLOCK_MONOTONIC_RAW CLOCK_MONOTONIC
 #endif
 
