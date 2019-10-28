--- src/server/reactor_thread.cc.orig	2019-09-25 07:04:17 UTC
+++ src/server/reactor_thread.cc
@@ -18,6 +18,9 @@
 #include "hash.h"
 #include "client.h"
 #include "websocket.h"
+#ifdef __DragonFly__
+#include <pthread_np.h>	/* for pthread_setaffinity_np() */
+#endif
 
 #include <unordered_map>
 
