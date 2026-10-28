--- loguru.cpp.orig
+++ loguru.cpp
@@ -1130,6 +1130,8 @@
 			#elif defined(__FreeBSD__)
 				long thread_id;
 				(void)thr_self(&thread_id);
+			#elif defined(__DragonFly__)
+				long thread_id = lwp_gettid();
 			#elif defined(__OpenBSD__)
 				pid_t thread_id = getthrid();
 			#elif LOGURU_PTHREADS
