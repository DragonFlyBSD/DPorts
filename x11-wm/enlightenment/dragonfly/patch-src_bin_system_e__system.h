--- src/bin/system/e_system.h.orig
+++ src/bin/system/e_system.h
@@ -63,13 +63,13 @@
 # include <signal.h>
 # include <inttypes.h>
 # include <assert.h>
-# if !defined (__FreeBSD__) && !defined (__OpenBSD__)
+# if !defined (__FreeBSD__) && !defined (__OpenBSD__) && !defined (__DragonFly__)
 #  ifdef HAVE_MALLOC_H
 #   include <malloc.h>
 #  endif
 # endif
 
-#if defined (__FreeBSD__) || defined (__OpenBSD__)
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__DragonFly__)
 # include <sys/sysctl.h>
 #endif
 
