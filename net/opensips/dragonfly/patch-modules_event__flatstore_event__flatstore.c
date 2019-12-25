--- modules/event_flatstore/event_flatstore.c.orig	2017-11-27 15:44:50 UTC
+++ modules/event_flatstore/event_flatstore.c
@@ -28,6 +28,7 @@
 #include <libgen.h>
 #include <sys/types.h>
 #include <sys/stat.h>
+#include <sys/uio.h>	/* for writev() */
 
 #include "event_flatstore.h"
 #include "../../mem/mem.h"
