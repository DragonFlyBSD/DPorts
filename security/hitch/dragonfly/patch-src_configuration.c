--- src/configuration.c.orig
+++ src/configuration.c
@@ -8,7 +8,7 @@
 
 #include <sys/types.h>
 #include <sys/stat.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/sysinfo.h>
 #endif
 
