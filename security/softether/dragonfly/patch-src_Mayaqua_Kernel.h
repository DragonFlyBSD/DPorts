--- src/Mayaqua/Kernel.h.orig	2020-11-29 11:54:19.000000000 +0000
+++ src/Mayaqua/Kernel.h
@@ -102,6 +102,8 @@
 #ifndef	KERNEL_H
 #define	KERNEL_H
 
+#include <stdint.h>
+
 // Memory usage information
 struct MEMINFO
 {
@@ -183,7 +185,7 @@ bool WaitThread(THREAD *t, UINT timeout)
 void InitThreading();
 void FreeThreading();
 void ThreadPoolProc(THREAD *t, void *param);
-void SetThreadName(UINT thread_id, char *name, void *param);
+void SetThreadName(uintmax_t thread_id, char *name, void *param);
 
 struct tm * c_gmtime_r(const time_64t* timep, struct tm *tm);
 time_64t c_mkgmtime(struct tm *tm);
