--- src/support/strtod.c.orig	2016-09-20 05:54:22.000000000 +0300
+++ src/support/strtod.c
@@ -3,7 +3,7 @@
 #include <stdlib.h>
 #include <locale.h>
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <xlocale.h>
 #endif
 
