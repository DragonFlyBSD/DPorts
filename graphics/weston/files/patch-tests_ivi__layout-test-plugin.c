--- tests/ivi_layout-test-plugin.c.orig	2015-10-02 20:44:22 +0200
+++ tests/ivi_layout-test-plugin.c
@@ -32,6 +32,10 @@
 #include <string.h>
 #include <assert.h>
 
+#if defined(__FreeBSD__)
+#include <sys/wait.h>
+#endif
+
 #include "src/compositor.h"
 #include "weston-test-server-protocol.h"
 #include "ivi-test.h"
