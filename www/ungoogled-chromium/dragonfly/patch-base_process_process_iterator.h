diff --git base/process/process_iterator.h base/process/process_iterator.h
index a819ae1327f..af123729ab4 100644
--- base/process/process_iterator.h
+++ base/process/process_iterator.h
@@ -26,7 +26,7 @@
 #include <tlhelp32.h>
 #elif BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_OPENBSD)
 #include <sys/sysctl.h>
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/user.h>
 #elif BUILDFLAG(IS_POSIX) || BUILDFLAG(IS_FUCHSIA)
 #include <dirent.h>
