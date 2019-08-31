--- src/server/reactor_thread.cc.orig	2019-08-17 07:24:40 UTC
+++ src/server/reactor_thread.cc
@@ -19,6 +19,9 @@
 #include "hash.h"
 #include "client.h"
 #include "websocket.h"
+#ifdef __DragonFly__
+#include <pthread_np.h>	/* for pthread_setaffinity_np() */
+#endif
 
 static int swReactorThread_loop(swThreadParam *param);
 static int swReactorThread_init(swServer *serv, swReactor *reactor, uint16_t reactor_id);
