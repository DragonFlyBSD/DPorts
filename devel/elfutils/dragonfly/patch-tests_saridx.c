--- tests/saridx.c.orig	2018-09-14 10:23:36 UTC
+++ tests/saridx.c
@@ -26,6 +26,9 @@
 #include <unistd.h>
 #include "system.h"
 
+#ifdef __DragonFly__
+#undef MACHINE
+#endif
 
 static const char *machines[] =
 {
