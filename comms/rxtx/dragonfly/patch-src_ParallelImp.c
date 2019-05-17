--- src/ParallelImp.c.intermediate	2019-05-02 17:14:09 UTC
+++ src/ParallelImp.c
@@ -113,8 +113,12 @@
 #endif
 #if defined(__FreeBSD__)
 /* #	include <machine/lpt.h> ? is this changed or wrong */
+#if defined(__DragonFly__)
+#	include <dev/misc/lpt/lpt.h>
+#else
 #	include <dev/ppbus/lpt.h>
 #endif
+#endif
 #ifdef __unixware__
 #	include  <sys/filio.h>
 #endif
