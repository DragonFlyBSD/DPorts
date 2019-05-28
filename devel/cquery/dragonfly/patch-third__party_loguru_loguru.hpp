--- third_party/loguru/loguru.hpp.orig	2018-04-09 14:35:46 UTC
+++ third_party/loguru/loguru.hpp
@@ -1388,7 +1388,9 @@ This will define all the Loguru function
 	#include <pthread.h>
 	#if defined(__FreeBSD__)
 		#include <pthread_np.h>
+	#ifndef __DragonFly__
 		#include <sys/thr.h>
+	#endif
 	#elif defined(__OpenBSD__)
 		#include <pthread_np.h>
 	#endif
@@ -2185,6 +2187,8 @@ namespace loguru
 			#ifdef __APPLE__
 				uint64_t thread_id;
 				pthread_threadid_np(thread, &thread_id);
+			#elif defined(__DragonFly__)
+				uint64_t thread_id = thread;
 			#elif defined(__FreeBSD__)
 				long thread_id;
 				(void)thr_self(&thread_id);
