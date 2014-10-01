--- src/timer.c.orig	2012-01-18 18:51:45 UTC
+++ src/timer.c
@@ -76,6 +76,9 @@ Timer_Wrapper(void * lpParam, bool Timer
 static bool 
 Timer_Init_Posix(struct Timer *timer)
 {
+    rzb_perror ("Timer_Init_Posix: Timers unsupported on DragonFly");
+    return false;
+#   if 0
     if ((timer->props = calloc(1,sizeof(struct sigevent))) == NULL)
         return false;
 
@@ -100,13 +103,17 @@ Timer_Init_Posix(struct Timer *timer)
     }
 
     return true;
+#   endif
 }
 
 static void 
 Timer_Destroy_Posix(struct Timer *timer)
 {
+#   if 0
     timer_delete(timer->timer);
     free(timer->props);
+#   endif
+    return;
 }
 
 static void 
