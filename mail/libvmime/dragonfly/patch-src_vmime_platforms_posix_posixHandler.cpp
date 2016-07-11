--- src/vmime/platforms/posix/posixHandler.cpp.intermediate	2016-07-11 13:49:32 UTC
+++ src/vmime/platforms/posix/posixHandler.cpp
@@ -238,6 +238,8 @@ unsigned int posixHandler::getThreadId()
 	return static_cast <unsigned int>(::gettid());
 #elif VMIME_HAVE_SYSCALL && VMIME_HAVE_SYSCALL_GETTID
 	return static_cast <unsigned int>(::syscall(SYS_gettid));
+#elif VMIME_HAVE_SYSCALL && defined(__DragonFly__)
+	return static_cast <unsigned int>(::syscall(SYS_lwp_gettid));
 #else
 	long id;
 	::syscall(SYS_thr_self, &id);
