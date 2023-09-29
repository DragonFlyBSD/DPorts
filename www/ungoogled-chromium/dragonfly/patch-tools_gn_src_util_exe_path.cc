diff --git tools/gn/src/util/exe_path.cc tools/gn/src/util/exe_path.cc
index e9b44443954..9aa6b614866 100644
--- tools/gn/src/util/exe_path.cc
+++ tools/gn/src/util/exe_path.cc
@@ -15,7 +15,7 @@
 #include <windows.h>
 
 #include "base/win/win_util.h"
-#elif defined(OS_FREEBSD) || defined(OS_NETBSD) || defined(OS_OPENBSD)
+#elif defined(OS_FREEBSD) || defined(OS_NETBSD) || defined(OS_OPENBSD) || defined(OS_DRAGONFLY)
 #include <limits.h>
 #include <sys/sysctl.h>
 #include <sys/types.h>
@@ -61,7 +61,7 @@ base::FilePath GetExePath() {
   return base::FilePath(system_buffer);
 }
 
-#elif defined(OS_FREEBSD)
+#elif defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
 
 base::FilePath GetExePath() {
   int mib[] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
