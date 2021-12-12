--- src/path-prefix.cpp.intermediate	2021-12-10 10:57:10 UTC
+++ src/path-prefix.cpp
@@ -20,7 +20,7 @@
 #include <mach-o/dyld.h> // for _NSGetExecutablePath
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/types.h>
 #include <sys/sysctl.h>
@@ -129,7 +129,7 @@ char const *get_program_name()
         if (!program_name) {
             g_warning("get_program_name() - g_file_read_link failed");
         }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__)  || defined(__DragonFly__)
        int mib[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 };
        char buf[MAXPATHLEN];
        size_t cb = sizeof(buf);
