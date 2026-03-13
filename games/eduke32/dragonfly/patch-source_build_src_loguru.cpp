--- source/build/src/loguru.cpp.orig	2026-02-13 16:57:03.061710000 +0100
+++ source/build/src/loguru.cpp	2026-02-13 16:48:28.767740000 +0100
@@ -117,9 +117,8 @@
 	#include <type_traits>
 
 	#include <pthread.h>
-	#if defined(__FreeBSD__)
+	#if defined(__FreeBSD__) || defined(__DragonFly__)
 		#include <pthread_np.h>
-		#include <sys/thr.h>
 	#elif defined(__OpenBSD__)
 		#include <pthread_np.h>
 	#endif
@@ -616,7 +615,7 @@ namespace loguru
 		// GNU Version
 		char buff[256];
 		return Text(STRDUP(strerror_r(errno, buff, sizeof(buff))));
-	#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || (defined(_POSIX_C_SOURCE) && _POSIX_C_SOURCE >= 200112L)
+	#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || (defined(_POSIX_C_SOURCE) && _POSIX_C_SOURCE >= 200112L)
 		// XSI Version
 		char buff[256];
 		strerror_r(errno, buff, sizeof(buff));
@@ -681,7 +680,7 @@ namespace loguru
 				if (old_thread_name[0] == 0) {
 					#ifdef __APPLE__
 						pthread_setname_np(main_thread_name);
-					#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+					#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)
 						pthread_set_name_np(this_thread, main_thread_name);
 					#elif defined(__linux__) || defined(__sun)
 						pthread_setname_np(this_thread, main_thread_name);
@@ -1114,7 +1113,7 @@ namespace loguru
 			// Tell the OS the thread name
 			#ifdef __APPLE__
 				pthread_setname_np(name);
-			#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+			#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)
 				pthread_set_name_np(pthread_self(), name);
 			#elif defined(__linux__) || defined(__sun)
 				pthread_setname_np(pthread_self(), name);
@@ -1144,14 +1143,14 @@ namespace loguru
 			} else {
 				buffer[0] = 0;
 			}
-		#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+		#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)
 			pthread_get_name_np(pthread_self(), buffer, length);
 		#elif LOGURU_PTHREADS
 			// Ask the OS about the thread name.
 			// This is what we *want* to do on all platforms, but
 			// only some platforms support it (currently).
 
-			#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__linux__) || defined(__sun)
+			#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__linux__) || defined(__sun)
 				pthread_getname_np(pthread_self(), buffer, length);
 			#else
 				// Other platforms that don't support thread names
@@ -1173,12 +1172,12 @@ namespace loguru
 			#ifdef __APPLE__
 				uint64_t thread_id;
 				pthread_threadid_np(pthread_self(), &thread_id);
-			#elif defined(__FreeBSD__)
+			#elif defined(__FreeBSD__) 
 				long thread_id;
 				(void)thr_self(&thread_id);
 			#elif defined(__OpenBSD__)
 				pid_t thread_id = getthrid();
-			#elif LOGURU_PTHREADS
+			#elif LOGURU_PTHREADS && !defined(__DragonFly__)
 				const auto native_id = pthread_self();
 				// Warning, even within POSIX, return types and sizes vary:
 				//  - Haku GCC returns a pthread_t*
