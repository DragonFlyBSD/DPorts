--- jdk/src/solaris/bin/java_md_solinux.c.orig	2018-02-09 21:09:53 UTC
+++ jdk/src/solaris/bin/java_md_solinux.c
@@ -35,7 +35,7 @@
 #include <sys/stat.h>
 #include <unistd.h>
 #include <sys/types.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 #endif
 #include "manifest_info.h"
@@ -977,7 +977,7 @@ SetExecname(char **argv)
             exec_path = JLI_StringDup(buf);
         }
     }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     {
         char buf[PATH_MAX+1];
         int name[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 };
