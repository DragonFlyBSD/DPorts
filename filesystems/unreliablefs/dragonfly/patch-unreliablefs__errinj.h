--- unreliablefs_errinj.h.orig
+++ unreliablefs_errinj.h
@@ -8,7 +8,7 @@
 
 #if defined(__linux__)
     #include "unreliablefs_errno_linux.h"
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     #include "unreliablefs_errno_freebsd.h"
 #elif defined(__OpenBSD__)
     #include "unreliablefs_errno_openbsd.h"
