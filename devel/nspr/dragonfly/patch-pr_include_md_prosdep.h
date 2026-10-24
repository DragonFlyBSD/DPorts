--- pr/include/md/prosdep.h.orig	2026-05-05 12:48:55 UTC
+++ pr/include/md/prosdep.h
@@ -39,6 +39,9 @@ PR_BEGIN_EXTERN_C
 #elif defined(OPENBSD)
 #include "md/_openbsd.h"
 
+#elif defined(__DragonFly__)
+#include "md/_dragonfly.h"
+
 #elif defined(LINUX) || defined(__GNU__) || defined(__GLIBC__)
 #include "md/_linux.h"
 
