--- rts/posix/OSThreads.c.orig	2014-12-23 04:31:10.000000000 +0200
+++ rts/posix/OSThreads.c
@@ -21,6 +21,12 @@
 #define __BSD_VISIBLE   1
 #endif
 
+#if defined(dragonfly_HOST_OS)
+/* Inclusion of system headers usually requires __BSD_VISIBLE on DragonFly,
+ * because of visibility for cpu_set_t and all CPU_*() affinity macros. */
+#define __BSD_VISIBLE   1
+#endif
+
 #include "Rts.h"
 
 #if defined(linux_HOST_OS)
@@ -31,7 +37,7 @@
 
 #if defined(HAVE_PTHREAD_H)
 #include <pthread.h>
-#if defined(freebsd_HOST_OS)
+#if defined(freebsd_HOST_OS) || defined(dragonfly_HOST_OS)
 #include <pthread_np.h>
 #endif
 #endif
@@ -44,7 +50,7 @@
 #include <string.h>
 #endif
 
-#if defined(darwin_HOST_OS) || defined(freebsd_HOST_OS)
+#if defined(darwin_HOST_OS) || defined(freebsd_HOST_OS) || defined(dragonfly_HOST_OS)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -243,7 +249,7 @@ getNumberOfProcessors (void)
         nproc = sysconf(_SC_NPROCESSORS_ONLN);
 #elif defined(HAVE_SYSCONF) && defined(_SC_NPROCESSORS_CONF)
         nproc = sysconf(_SC_NPROCESSORS_CONF);
-#elif defined(darwin_HOST_OS) || defined(freebsd_HOST_OS)
+#elif defined(darwin_HOST_OS) || defined(freebsd_HOST_OS) || defined(dragonfly_HOST_OS)
         size_t size = sizeof(nat);
         if(0 != sysctlbyname("hw.ncpu",&nproc,&size,NULL,0))
             nproc = 1;
