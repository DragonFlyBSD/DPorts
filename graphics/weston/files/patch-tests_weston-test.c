--- tests/weston-test.c.orig	2015-10-02 20:39:23 +0200
+++ tests/weston-test.c
@@ -31,6 +31,10 @@
 #include <unistd.h>
 #include <string.h>
 
+#if defined(__FreeBSD__)
+#include <sys/wait.h>
+#endif
+
 #include "src/compositor.h"
 #include "weston-test-server-protocol.h"
 
