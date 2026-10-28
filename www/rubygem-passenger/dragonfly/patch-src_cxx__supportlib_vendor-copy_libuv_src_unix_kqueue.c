--- src/cxx_supportlib/vendor-copy/libuv/src/unix/kqueue.c.orig
+++ src/cxx_supportlib/vendor-copy/libuv/src/unix/kqueue.c
@@ -26,6 +26,7 @@
 #include <string.h>
 #include <errno.h>
 
+#include <sys/param.h> /* MAXPATHLEN, for the F_GETPATH buffer */
 #include <sys/sysctl.h>
 #include <sys/types.h>
 #include <sys/event.h>
