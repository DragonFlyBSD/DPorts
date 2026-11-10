--- mono/utils/mono-threads-posix-signals.c.orig
+++ mono/utils/mono-threads-posix-signals.c
@@ -94,7 +94,7 @@
 		suspend_signum = mono_threads_suspend_search_alternative_signal ();
 	return suspend_signum;
 #else
-#if defined(__APPLE__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__APPLE__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 	return SIGXFSZ;
 #else
 	return SIGPWR;
