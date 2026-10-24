--- src/core/util/posix/directory_reader.cc.orig	2026-06-04 21:58:26 UTC
+++ src/core/util/posix/directory_reader.cc
@@ -25,7 +25,8 @@
 #include "absl/strings/string_view.h"
 
 #if defined(GPR_LINUX) || defined(GPR_ANDROID) || defined(GPR_FREEBSD) || \
-    defined(GPR_APPLE) || defined(GPR_NETBSD) || defined(GPR_OPENBSD)
+    defined(GPR_APPLE) || defined(GPR_NETBSD) || defined(GPR_OPENBSD) || \
+    defined(GPR_DRAGONFLY)
 
 #include <dirent.h>
 
