--- plugins/video/common/platform.h.orig	2013-02-20 04:18:05.000000000 +0200
+++ plugins/video/common/platform.h
@@ -63,6 +63,7 @@
   #include "stdint.h"
 #else
   #include "plugin-config.h"
+  #include <stddef.h>
   #include <stdint.h>
   #include <semaphore.h>
   #include <dlfcn.h>
