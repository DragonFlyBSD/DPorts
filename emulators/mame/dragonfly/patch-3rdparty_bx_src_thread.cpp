--- 3rdparty/bx/src/thread.cpp.intermediate	2018-04-09 18:23:02 UTC
+++ 3rdparty/bx/src/thread.cpp
@@ -14,7 +14,7 @@
 	|| BX_PLATFORM_BSD     \
 	|| BX_PLATFORM_RPI
 #	include <pthread.h>
-#	if defined(__FreeBSD__)
+#	if defined(__FreeBSD__) || defined(__DragonFly__)
 #		include <pthread_np.h>
 #	endif
 #	if BX_PLATFORM_LINUX && (BX_CRT_GLIBC < 21200)
