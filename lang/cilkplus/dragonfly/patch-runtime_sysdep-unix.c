--- runtime/sysdep-unix.c.orig	2016-06-01 22:59:39.000000000 +0300
+++ runtime/sysdep-unix.c
@@ -97,6 +97,10 @@
 #   define MAP_ANONYMOUS MAP_ANON
 #endif
 
+#ifdef __DragonFly__
+#   include <sys/resource.h>
+#endif
+
 #ifdef  __VXWORKS__
 #   include <vxWorks.h>   
 #   include <vxCpuLib.h>  
