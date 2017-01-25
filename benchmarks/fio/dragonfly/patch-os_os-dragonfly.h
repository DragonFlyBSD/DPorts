--- os/os-dragonfly.h.orig	2017-01-17 17:51:31.000000000 +0200
+++ os/os-dragonfly.h
@@ -13,6 +13,10 @@
 #include <sys/usched.h>
 #include <sys/resource.h>
 
+#if __DragonFly_version >= 400709
+#include <sys/lwp.h>
+#endif
+
 #include "../file.h"
 
 #define FIO_HAVE_ODIRECT
