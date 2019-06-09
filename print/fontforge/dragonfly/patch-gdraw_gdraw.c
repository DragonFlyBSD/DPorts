--- gdraw/gdraw.c.orig	2017-07-30 21:49:01 UTC
+++ gdraw/gdraw.c
@@ -29,7 +29,7 @@
 #include <ustring.h>
 #include <gio.h>
 #include "gdraw.h"
-#if __Mac
+#if __Mac || __DragonFly__
 #  include <sys/select.h>
 #endif
 
