--- include/sockpp/platform.h.orig
+++ include/sockpp/platform.h
@@ -100,7 +100,7 @@
 	#include <sys/time.h>
 	#include <sys/uio.h>
 	#include <arpa/inet.h>
-	#ifdef __FreeBSD__
+	#if defined(__FreeBSD__) || defined(__DragonFly__)
 		#include <netinet/in.h>
 	#endif
 	#include <netdb.h>
