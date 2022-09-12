--- src/libutil/sysutil.cpp.orig	2022-06-01 15:37:19 UTC
+++ src/libutil/sysutil.cpp
@@ -23,7 +23,7 @@
 #endif
 
 #if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) \
-    || defined(__OpenBSD__)
+  || defined(__OpenBSD__) || defined(__DragonFly__)
 #    include <sys/ioctl.h>
 #    include <sys/resource.h>
 #    include <sys/sysctl.h>
@@ -134,7 +134,7 @@ Sysutil::memory_used(bool resident)
         return 0;
 
 #elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) \
-    || defined(__NetBSD__) || defined(__OpenBSD__)
+    || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 
     // FIXME -- does somebody know a good method for figuring this out for
     // FreeBSD?
@@ -191,7 +191,7 @@ Sysutil::physical_memory()
     //        statex.ullTotalVirtual   Total virtual memory
     //        statex.ullAvailVirtual   Free virtual memory
 
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
     // man 3 sysctl   ...or...
     // http://www.freebsd.org/cgi/man.cgi?query=sysctl&sektion=3
     // FIXME -- Does this accept a size_t?  Or only an int?  I can't
@@ -259,7 +259,7 @@ Sysutil::this_program_path()
     int r             = _NSGetExecutablePath(filename, &size);
     if (r == 0)
         r = size;
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
     int mib[4];
     mib[0]    = CTL_KERN;
     mib[1]    = KERN_PROC;
@@ -331,7 +331,7 @@ Sysutil::terminal_columns()
 
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) \
     || defined(__FreeBSD_kernel__) || defined(__NetBSD__)            \
-    || defined(__OpenBSD__) || defined(__GNU__)
+    || defined(__OpenBSD__) || defined(__GNU__) || defined(__DragonFly__)
     struct winsize w;
     ioctl(0, TIOCGWINSZ, &w);
     columns = w.ws_col;
@@ -356,7 +356,7 @@ Sysutil::terminal_rows()
 
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) \
     || defined(__FreeBSD_kernel__) || defined(__NetBSD__)            \
-    || defined(__OpenBSD__) || defined(__GNU__)
+    || defined(__OpenBSD__) || defined(__GNU__) || defined(__DragonFly__)
     struct winsize w;
     ioctl(0, TIOCGWINSZ, &w);
     rows = w.ws_row;
