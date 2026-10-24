diff --git base/process/process_iterator.h base/process/process_iterator.h
index 3d0734a828b5..2bd8b4ccbf23 100644
--- base/process/process_iterator.h
+++ base/process/process_iterator.h
@@ -27,7 +27,7 @@
 #include <tlhelp32.h>
 #elif BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_OPENBSD)
 #include <sys/sysctl.h>
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/user.h>
 #elif BUILDFLAG(IS_POSIX) || BUILDFLAG(IS_FUCHSIA)
 #include <dirent.h>
