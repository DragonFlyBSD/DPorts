--- src/proxymain.c.orig	2019-08-01 14:54:28 UTC
+++ src/proxymain.c
@@ -7,6 +7,7 @@
 */
 
 #include "proxy.h"
+#include <stdint.h>
 
 pthread_mutex_t log_mutex;
 
@@ -471,7 +472,7 @@ int MODULEMAINFUNC (int argc, char** arg
 		defparam.clisock = sock;
 
 	if(!srv.silent && !iscbc){
-		sprintf((char *)buf, "Accepting connections [%u/%u]", (unsigned)getpid(), (unsigned)pthread_self());
+		sprintf((char *)buf, "Accepting connections [%u/%ju]", (unsigned)getpid(), (uintmax_t)pthread_self());
 		(*srv.logfunc)(&defparam, buf);
 	}
  }
@@ -677,7 +678,7 @@ int MODULEMAINFUNC (int argc, char** arg
 		if(!srv.silent)(*srv.logfunc)(&defparam, buf);
 	}
 	else {
-		newparam->threadid = (unsigned)thread;
+		newparam->threadid = (uintptr_t)thread;
 	}
 #endif
 	pthread_mutex_unlock(&srv.counter_mutex);
