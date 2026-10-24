--- io/iom_wait.c.orig
+++ io/iom_wait.c
@@ -1,4 +1,6 @@
+#ifndef __DragonFly__
 #define _POSIX_C_SOURCE 200809L
+#endif
 #include "io_internal.h"
 #ifdef HAVE_EPOLL
 #include <sys/epoll.h>
