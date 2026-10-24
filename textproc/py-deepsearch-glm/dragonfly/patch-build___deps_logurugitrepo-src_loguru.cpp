--- build/_deps/logurugitrepo-src/loguru.cpp.orig	2026-10-23 00:00:00 UTC
+++ build/_deps/logurugitrepo-src/loguru.cpp
@@ -1100,6 +1100,8 @@
 			#elif defined(__FreeBSD__)
 				long thread_id;
 				(void)thr_self(&thread_id);
+			#elif defined(__DragonFly__)
+				uint64_t thread_id = pthread_getthreadid_np();
 			#elif LOGURU_PTHREADS
 				uint64_t thread_id = pthread_self();
 			#else
