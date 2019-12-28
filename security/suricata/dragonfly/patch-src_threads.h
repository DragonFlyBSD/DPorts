--- src/threads.h.orig	2019-10-14 11:25:49 UTC
+++ src/threads.h
@@ -43,9 +43,9 @@
 #endif /* PROFILE_LOCKING */
 #endif /* PROFILING */
 
-#if defined OS_FREEBSD || __OpenBSD__
+#if defined OS_FREEBSD || defined __OpenBSD__ || defined __DragonFly__
 
-#if ! defined __OpenBSD__
+#if ! defined __OpenBSD__ && ! defined __DragonFly__
 #include <sys/thr.h>
 #endif
 enum {
@@ -217,7 +217,7 @@ enum {
     u_long _scgetthread_tid = (u_long)tmpthid; \
     _scgetthread_tid; \
 })
-#elif __OpenBSD__
+#elif __OpenBSD__ || __DragonFly__
 #define SCGetThreadIdLong(...) ({ \
     pid_t tpid; \
     tpid = getpid(); \
@@ -272,7 +272,7 @@ enum {
     pthread_set_name_np(pthread_self(), tname); \
     0; \
 })
-#elif defined __OpenBSD__ /* OpenBSD */
+#elif defined __OpenBSD__ /* OpenBSD */ || defined __DragonFly__
 /** \todo Add implementation for OpenBSD */
 #define SCSetThreadName(n) (0)
 #elif defined OS_WIN32 /* Windows */
