--- spa/plugins/support/logger.c.orig	2022-07-07 08:19:55 UTC
+++ spa/plugins/support/logger.c
@@ -42,7 +42,7 @@
 
 #include "log-patterns.h"
 
-#if defined(__FreeBSD__) || defined(__MidnightBSD__)
+#if defined(__FreeBSD__) || defined(__MidnightBSD__) || defined(__DragonFly__)
 #define CLOCK_MONOTONIC_RAW CLOCK_MONOTONIC
 #endif
 
