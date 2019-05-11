--- src/madness/world/hardware.h.orig	2018-08-24 00:32:22 UTC
+++ src/madness/world/hardware.h
@@ -54,7 +54,7 @@
 #    define HARDWARE_RUNS_BGQ
 #    include <mpix.h>
 #  endif
-#elif (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #  define HARDWARE_USE_SYSCTL
 #  include <sys/time.h>
 #  include <sys/types.h>
