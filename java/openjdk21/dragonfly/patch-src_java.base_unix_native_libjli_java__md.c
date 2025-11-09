--- src/java.base/unix/native/libjli/java_md.c.orig	2021-09-14 03:59:48 UTC
+++ src/java.base/unix/native/libjli/java_md.c
@@ -35,6 +35,9 @@
 #include <sys/stat.h>
 #include <unistd.h>
 #include <sys/types.h>
+#ifdef __DragonFly__
+#include <sys/sysctl.h>
+#endif
 #ifdef __FreeBSD__
 #include <sys/sysctl.h>
 #include <sys/procctl.h>
@@ -616,7 +619,7 @@ SetExecname(char **argv)
             exec_path = JLI_StringDup(buf);
         }
     }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     {
         char buf[PATH_MAX+1];
         int name[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 };
