--- ext/random/random.c.orig	Tue Mar 11 17:58:12 2025
+++ ext/random/random.c	Thu Apr
@@ -48,7 +48,7 @@
 
 #if HAVE_SYS_PARAM_H
 # include <sys/param.h>
-# if (__FreeBSD__ && __FreeBSD_version > 1200000) || (__DragonFly__ && __DragonFly_version >= 500700) || (defined(__sun) && defined(HAVE_GETRANDOM))
+# if (__FreeBSD__ && __FreeBSD_version > 1200000) || (__DragonFly__) || (defined(__sun) && defined(HAVE_GETRANDOM))
 #  include <sys/random.h>
 # endif
 #endif
