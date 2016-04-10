--- hadoop-common-project/hadoop-common/src/main/native/src/org/apache/hadoop/crypto/random/OpensslSecureRandom.c.orig	2016-01-26 00:07:35 UTC
+++ hadoop-common-project/hadoop-common/src/main/native/src/org/apache/hadoop/crypto/random/OpensslSecureRandom.c
@@ -281,6 +281,8 @@ static unsigned long pthreads_thread_id(
   unsigned long thread_id = 0;
 #if defined(__linux__)
   thread_id = (unsigned long)syscall(SYS_gettid);
+#elif defined(__DragonFly__)
+  thread_id = (unsigned long)syscall(SYS_lwp_gettid);
 #elif defined(__FreeBSD__)
   thread_id = (unsigned long)pthread_getthreadid_np();
 #elif defined(__sun)
