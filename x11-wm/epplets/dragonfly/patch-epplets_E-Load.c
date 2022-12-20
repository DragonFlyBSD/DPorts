--- epplets/E-Load.c.orig	2022-12-10 11:23:51.519649000 +0100
+++ epplets/E-Load.c	2022-12-10 11:28:25.284140000 +0100
@@ -8,7 +8,7 @@
 #include "proc.h"
 #endif
 
-#ifdef __FreeBSD__
+#if  defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #include <sys/resource.h>
@@ -129,7 +129,7 @@
      }
    /* printf ("CPUs: %d\n", c); */
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
    int mib[2];
    int c;
