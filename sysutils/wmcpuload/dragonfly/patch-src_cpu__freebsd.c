--- src/cpu_freebsd.c.intermediate	2022-01-31 21:54:57.000000000 +0000
+++ src/cpu_freebsd.c
@@ -22,7 +22,7 @@
 
 #include <sys/param.h>
 
-#if __FreeBSD_version < 500101
+#if defined(__FreeBSD__) && __FreeBSD_version < 500101
 #   include <sys/dkstat.h>
 #else
 #   include <sys/resource.h>
