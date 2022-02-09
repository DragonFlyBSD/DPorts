--- src/util/u_process.c.intermediate	2022-02-09 07:55:09.000000000 +0000
+++ src/util/u_process.c
@@ -44,7 +44,7 @@
 #include <mach-o/dyld.h>
 #endif
 
-#if DETECT_OS_FREEBSD
+#if DETECT_OS_FREEBSD || DETECT_OS_DRAGONFLY
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -207,7 +207,7 @@ util_get_process_exec_path(char* process
    int result = _NSGetExecutablePath(process_path, &bufSize);
 
    return (result == 0) ? strlen(process_path) : 0;
-#elif DETECT_OS_FREEBSD
+#elif DETECT_OS_FREEBSD || DETECT_OS_DRAGONFLY
    int mib[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 };
 
    (void) sysctl(mib, 4, process_path, &len, NULL, 0);
