--- shared/qcommon/q_platform.h.orig	2019-04-07 09:22:21 UTC
+++ shared/qcommon/q_platform.h
@@ -144,7 +144,7 @@ along with this program; if not, see <ht
 	#define DLL_EXT ".so"
 
 // BSD
-#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 
 	#include <sys/types.h>
 	#include <machine/endian.h>
@@ -159,6 +159,8 @@ along with this program; if not, see <ht
 		#define OS_STRING "openbsd"
 	#elif defined(__NetBSD__)
 		#define OS_STRING "netbsd"
+	#elif defined(__DragonFly__)
+		#define OS_STRING "dragonfly"
 	#endif
 
 	#define QINLINE inline
