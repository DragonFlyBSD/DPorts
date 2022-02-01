--- src/rktio/rktio_cpu.c.orig	2021-10-24 04:18:15 UTC
+++ src/rktio/rktio_cpu.c
@@ -4,7 +4,7 @@
 #if defined(OS_X) && defined(__POWERPC__)
 # include <sys/param.h>
 # include <sys/sysctl.h>
-#elif defined(__linux__) || defined(__QNX__) || defined(OS_X) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(sun)
+#elif defined(__linux__) || defined(__QNX__) || defined(OS_X) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(sun) || defined(__DragonFly__)
 # include <unistd.h>
 # define USE_SYSCONF_NPROCESSORS_ONLN
 #elif defined(RKTIO_SYSTEM_WINDOWS)
