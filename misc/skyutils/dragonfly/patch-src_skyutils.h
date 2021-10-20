XXX port assumes pthread_self() returns pid_t

--- src/skyutils.h.orig	2006-04-24 08:44:09 UTC
+++ src/skyutils.h
@@ -52,6 +52,7 @@ typedef unsigned int bool;
 #include <stdlib.h>
 #include <fcntl.h>
 #include <signal.h>
+#include <stdint.h>
 #ifndef _WIN32
 #include <unistd.h>
 #include <sys/types.h>
@@ -552,7 +553,7 @@ extern SU_PList SW_Cookies; /* SU_PCooki
 #define SU_THREAD_ROUTINE(x,y) void * x(void *y)
 #define SU_END_THREAD(x) pthread_exit(x)
 #define SU_PROCESS_SELF (SU_u32)getpid()
-#define SU_THREAD_SELF (SU_u32)pthread_self()
+#define SU_THREAD_SELF (SU_u32)(uintmax_t)pthread_self()
 #define SU_THREAD_KEY_HANDLE pthread_key_t
 #define SU_THREAD_ONCE_HANDLE pthread_once_t
 #define SU_THREAD_ONCE_INIT PTHREAD_ONCE_INIT
