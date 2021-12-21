--- node_build/dependencies/libuv/src/unix/kqueue.c.orig	2020-10-05 21:46:19 UTC
+++ node_build/dependencies/libuv/src/unix/kqueue.c
@@ -18,6 +18,10 @@
  * IN THE SOFTWARE.
  */
 
+#ifdef __DragonFly__
+#include <sys/param.h> /* for MAXPATHLEN */
+#endif
+
 #include "uv.h"
 #include "internal.h"
 
