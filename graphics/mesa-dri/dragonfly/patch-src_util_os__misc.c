--- src/util/os_misc.c.orig	2021-09-08 21:22:06 UTC
+++ src/util/os_misc.c
@@ -59,7 +59,7 @@
 #  include <cutils/properties.h>
 #elif DETECT_OS_LINUX || DETECT_OS_CYGWIN || DETECT_OS_SOLARIS || DETECT_OS_HURD
 #  include <unistd.h>
-#elif DETECT_OS_OPENBSD || DETECT_OS_FREEBSD
+#elif DETECT_OS_OPENBSD || DETECT_OS_FREEBSD || DETECT_OS_DRAGONFLY
 #  include <sys/resource.h>
 #  include <sys/sysctl.h>
 #elif DETECT_OS_APPLE || DETECT_OS_BSD
@@ -302,7 +302,7 @@ os_get_available_system_memory(uint64_t
    struct rlimit rl;
 #if DETECT_OS_OPENBSD
    int mib[] = { CTL_HW, HW_USERMEM64 };
-#elif DETECT_OS_FREEBSD
+#elif DETECT_OS_FREEBSD || DETECT_OS_DRAGONFLY
    int mib[] = { CTL_HW, HW_USERMEM };
 #endif
    int64_t mem_available;
