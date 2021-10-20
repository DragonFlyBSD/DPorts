--- src/Mayaqua/Kernel.c.intermdediate	2020-11-29 11:54:19.000000000 +0000
+++ src/Mayaqua/Kernel.c
@@ -1117,7 +1117,7 @@ void ThreadPoolProc(THREAD *t, void *par
 }
 
 // Set the thread name
-void SetThreadName(UINT thread_id, char *name, void *param)
+void SetThreadName(uintmax_t thread_id, char *name, void *param)
 {
 #ifdef	OS_WIN32
 	if (IsDebug())
