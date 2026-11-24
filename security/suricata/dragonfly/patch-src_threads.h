--- src/threads.h.orig
+++ src/threads.h
@@ -46,9 +46,9 @@
 #include <unistd.h>
 #endif
 
-#if defined OS_FREEBSD || __OpenBSD__
+#if defined OS_FREEBSD || defined __OpenBSD__ || defined __DragonFly__
 
-#if ! defined __OpenBSD__
+#if ! defined __OpenBSD__ && ! defined __DragonFly__
 #include <sys/thr.h>
 #endif
 enum {
@@ -219,7 +219,7 @@
     unsigned long _scgetthread_tid = (unsigned long)tmpthid; \
     _scgetthread_tid; \
 })
-#elif __OpenBSD__
+#elif __OpenBSD__ || __DragonFly__
 #define SCGetThreadIdLong(...) ({ \
     pid_t tpid; \
     tpid = getpid(); \
@@ -277,7 +277,7 @@
         strlcpy(t_thread_name, n, sizeof(t_thread_name));                                          \
         pthread_set_name_np(pthread_self(), tname);                                                \
     })
-#elif defined __OpenBSD__ /* OpenBSD */
+#elif defined __OpenBSD__ || defined __DragonFly__ /* OpenBSD */
 /** \todo Add implementation for OpenBSD */
 #define SCSetThreadName(n) ({ strlcpy(t_thread_name, n, sizeof(t_thread_name)); })
 #elif defined OS_WIN32 /* Windows */
