--- src/util/os_misc.c.intermediate	2020-10-31 14:47:24 UTC
+++ src/util/os_misc.c
@@ -58,7 +58,7 @@
 #  include <log/log.h>
 #elif DETECT_OS_LINUX || DETECT_OS_CYGWIN || DETECT_OS_SOLARIS || DETECT_OS_HURD
 #  include <unistd.h>
-#elif DETECT_OS_OPENBSD || DETECT_OS_FREEBSD
+#elif DETECT_OS_OPENBSD || DETECT_OS_FREEBSD || DETECT_OS_DRAGONFLY
 #  include <sys/resource.h>
 #  include <sys/sysctl.h>
 #elif DETECT_OS_APPLE || DETECT_OS_BSD
@@ -217,7 +217,7 @@ os_get_available_system_memory(uint64_t
    struct rlimit rl;
 #if DETECT_OS_OPENBSD
    int mib[] = { CTL_HW, HW_USERMEM64 };
-#elif DETECT_OS_FREEBSD
+#elif DETECT_OS_FREEBSD || DETECT_OS_DRAGONFLY
    int mib[] = { CTL_HW, HW_USERMEM };
 #endif
    int64_t mem_available;
