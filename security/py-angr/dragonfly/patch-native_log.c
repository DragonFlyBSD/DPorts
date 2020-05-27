--- native/log.c.intermediate	2020-05-26 23:24:00 UTC
+++ native/log.c
@@ -34,7 +34,7 @@
 #include <unistd.h>
 
 #include <sys/syscall.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <pthread_np.h>
 #endif
 
@@ -110,7 +110,7 @@ void logLog(enum llevel_t ll, const char
         dprintf(log_fd, "%s", logLevels[ll].prefix);
     }
     if (logLevels[ll].print_funcline) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         dprintf(log_fd, "[%s][%s][%d] %s():%d ", timestr, logLevels[ll].descr, (pid_t)pthread_getthreadid_np, fn, ln);
 #else
         dprintf(log_fd, "[%s][%s][%d] %s():%d ", timestr, logLevels[ll].descr, (pid_t)syscall(__NR_gettid), fn, ln);
