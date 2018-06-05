--- rts/posix/OSThreads.c.orig	2018-02-01 04:51:19 UTC
+++ rts/posix/OSThreads.c
@@ -20,6 +20,12 @@
 #define _DARWIN_C_SOURCE 1
 #endif
 
+#if defined(dragonfly_HOST_OS)
+/* Inclusion of system headers usually requires __BSD_VISIBLE on DragonFly,
+ * because of visibility for cpu_set_t and all CPU_*() affinity macros. */
+#define __BSD_VISIBLE   1
+#endif
+
 #include "Rts.h"
 
 #if defined(linux_HOST_OS)
@@ -30,7 +36,7 @@
 
 #if defined(HAVE_PTHREAD_H)
 #include <pthread.h>
-#if defined(freebsd_HOST_OS)
+#if defined(freebsd_HOST_OS) || defined(dragonfly_HOST_OS)
 #include <pthread_np.h>
 #endif
 #endif
@@ -42,7 +48,7 @@
 #include <string.h>
 #endif
 
-#if defined(darwin_HOST_OS) || defined(freebsd_HOST_OS)
+#if defined(darwin_HOST_OS) || defined(freebsd_HOST_OS) || defined(dragonfly_HOST_OS)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -256,7 +262,7 @@ getNumberOfProcessors (void)
             if(sysctlbyname("hw.ncpu",&nproc,&size,NULL,0) != 0)
                 nproc = 1;
         }
-#elif defined(freebsd_HOST_OS)
+#elif defined(freebsd_HOST_OS) || defined(dragonfly_HOST_OS)
         size_t size = sizeof(uint32_t);
         if(sysctlbyname("hw.ncpu",&nproc,&size,NULL,0) != 0)
             nproc = 1;
