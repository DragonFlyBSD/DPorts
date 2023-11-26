--- src/3rdparty/chromium/base/debug/proc_maps_linux.cc.intermediate	2023-11-26 00:20:50 UTC
+++ src/3rdparty/chromium/base/debug/proc_maps_linux.cc
@@ -6,6 +6,7 @@
 
 #include <fcntl.h>
 #include <stddef.h>
+#include <string.h>
 
 #include "base/files/file_util.h"
 #include "base/files/scoped_file.h"
