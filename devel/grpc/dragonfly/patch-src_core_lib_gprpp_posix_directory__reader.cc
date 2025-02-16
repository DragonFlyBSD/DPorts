--- src/core/lib/gprpp/posix/directory_reader.cc.orig	Wed Oct 23 16:57:09 2024
+++ src/core/lib/gprpp/posix/directory_reader.cc	Wed Oct
@@ -25,6 +25,7 @@
 #include "absl/strings/string_view.h"
 
 #if defined(GPR_LINUX) || defined(GPR_ANDROID) || defined(GPR_FREEBSD) || \
+    defined(GPR_DRAGONFLY) || \
     defined(GPR_APPLE)
 
 #include <dirent.h>
