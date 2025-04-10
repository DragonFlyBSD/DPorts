--- pr/include/md/prosdep.h.orig	Mon Oct 21 11:31:57 2024
+++ pr/include/md/prosdep.h	Tue Apr
@@ -40,6 +40,9 @@ PR_BEGIN_EXTERN_C
 #elif defined(OPENBSD)
 #include "md/_openbsd.h"
 
+#elif defined(__DragonFly__)
+#include "md/_dragonfly.h"
+
 #elif defined(HPUX)
 #include "md/_hpux.h"
 
