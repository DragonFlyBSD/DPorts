--- src/porting.h.orig	2014-11-24 19:24:31.000000000 +0200
+++ src/porting.h
@@ -331,7 +331,7 @@ inline u32 getDeltaMs(u32 old_time_ms, u
 		 */
 		prctl(PR_SET_NAME, name);
 	}
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	#include <pthread.h>
 	#include <pthread_np.h>
 
@@ -375,7 +375,7 @@ inline u32 getDeltaMs(u32 old_time_ms, u
 	inline void setThreadName(const char* name) {}
 #endif
 
-#if defined(linux) || defined(__linux) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(linux) || defined(__linux) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__)
 	#define PORTING_USE_PTHREAD 1
 	#include <pthread.h>
 #endif
