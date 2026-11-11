--- VTK/ThirdParty/loguru/vtkloguru/loguru.cpp.orig
+++ VTK/ThirdParty/loguru/vtkloguru/loguru.cpp
@@ -989,6 +989,8 @@
 			#elif defined(__FreeBSD__)
 				long thread_id;
 				(void)thr_self(&thread_id);
+			#elif defined(__DragonFly__)
+				long thread_id = lwp_gettid();
 			#elif defined(__OpenBSD__)
 				pid_t thread_id = getthrid();
 			#elif LOGURU_PTHREADS
