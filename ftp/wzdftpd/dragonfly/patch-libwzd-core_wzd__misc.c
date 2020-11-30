--- libwzd-core/wzd_misc.c.orig	2007-05-21 06:33:23 UTC
+++ libwzd-core/wzd_misc.c
@@ -1015,7 +1015,7 @@ int kill_child_signal(unsigned long pid,
   loop_context->exitclient = 1;
 /*  ret = TerminateThread((HANDLE)pid,0);*/
 #else
-  ret = pthread_cancel(pid);
+  ret = pthread_cancel((pthread_t)pid);
 #endif
 
   return 0;
