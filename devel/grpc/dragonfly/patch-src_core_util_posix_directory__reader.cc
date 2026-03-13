--- src/core/util/posix/directory_reader.cc.orig	2025-08-25 08:59:24 UTC
+++ src/core/util/posix/directory_reader.cc
@@ -25,6 +25,7 @@
 #include "absl/strings/string_view.h"
 
 #if defined(GPR_LINUX) || defined(GPR_ANDROID) || defined(GPR_FREEBSD) || \
+    defined(GPR_DRAGONFLY) || \
     defined(GPR_APPLE) || defined(GPR_NETBSD)
 
 #include <dirent.h>
