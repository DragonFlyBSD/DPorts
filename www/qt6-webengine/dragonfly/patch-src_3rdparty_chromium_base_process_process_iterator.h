diff --git base/process/process_iterator.h base/process/process_iterator.h
index db1799f3ab4..578ae448ec8 100644
--- src/3rdparty/chromium/base/process/process_iterator.h
+++ src/3rdparty/chromium/base/process/process_iterator.h
@@ -25,7 +25,7 @@
 #include <tlhelp32.h>
 #elif BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_OPENBSD)
 #include <sys/sysctl.h>
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/user.h>
 #elif BUILDFLAG(IS_POSIX) || BUILDFLAG(IS_FUCHSIA)
 #include <dirent.h>
