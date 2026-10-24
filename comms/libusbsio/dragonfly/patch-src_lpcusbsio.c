--- src/lpcusbsio.c.orig	2026-10-24 00:00:00 UTC
+++ src/lpcusbsio.c
@@ -13,7 +13,7 @@
 #include <stdlib.h>
 #include <stdarg.h>
 #include <ctype.h>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include "hidapi_mock.h"
 #else
 #include "hidapi.h"
