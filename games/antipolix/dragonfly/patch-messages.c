--- messages.c.orig	1995-08-04 01:29:37.000000000 +0300
+++ messages.c
@@ -7,6 +7,10 @@
 #include <memory.h>
 #include <sys/types.h>
 #include <netinet/in.h>
+#ifdef __DragonFly__
+#include <sys/uio.h>
+#include <unistd.h>
+#endif
 
 #include "messages.h"
 #include "creation.h"
