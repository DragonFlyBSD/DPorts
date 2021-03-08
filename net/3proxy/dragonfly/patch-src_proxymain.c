--- src/proxymain.c.orig	2020-12-03 18:14:59 UTC
+++ src/proxymain.c
@@ -7,6 +7,7 @@
 */
 
 #include "proxy.h"
+#include <stdint.h>
 
 #define param ((struct clientparam *) p)
 #ifdef _WIN32
@@ -631,7 +632,7 @@ int MODULEMAINFUNC (int argc, char** arg
 		defparam.clisock = sock;
 
 	if(!srv.silent && !iscbc){
-		sprintf((char *)buf, "Accepting connections [%u/%u]", (unsigned)getpid(), (unsigned)pthread_self());
+		sprintf((char *)buf, "Accepting connections [%ju/%ju]", (unsigned)getpid(), (uintmax_t)pthread_self());
 		dolog(&defparam, buf);
 	}
  }
@@ -843,7 +844,7 @@ int MODULEMAINFUNC (int argc, char** arg
 		if(!srv.silent)dolog(&defparam, buf);
 	}
 	else {
-		newparam->threadid = (unsigned)thread;
+		newparam->threadid = (uintptr_t)thread;
 	}
 #endif
 	pthread_mutex_unlock(&srv.counter_mutex);
