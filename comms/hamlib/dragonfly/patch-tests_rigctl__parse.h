--- tests/rigctl_parse.h.orig
+++ tests/rigctl_parse.h
@@ -27,6 +27,10 @@
 
 #include <stdio.h>
 #include <pthread.h>
+#if !defined(_WIN32)
+/* struct sockaddr_storage; DragonFly's <netinet/in.h> does not define it */
+#include <sys/socket.h>
+#endif
 #include "hamlib/rig.h"
 
 #define RIGCTL_PARSE_END 1
