--- vfe/unix/platformbase.cpp.orig	2018-05-27 09:54:06 UTC
+++ vfe/unix/platformbase.cpp
@@ -133,7 +133,7 @@ namespace pov_base
 	{
 #ifdef HAVE_CLOCK_GETTIME
 		struct timespec ts;
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined(__DragonFly__)
 		if (clock_gettime(m_ThreadTimeOnly ? CLOCK_THREAD_CPUTIME_ID : CLOCK_REALTIME, &ts) == 0)
 #else
 		if (clock_gettime(m_ThreadTimeOnly ? CLOCK_THREAD_CPUTIME_ID : CLOCK_PROCESS_CPUTIME_ID, &ts) == 0)
