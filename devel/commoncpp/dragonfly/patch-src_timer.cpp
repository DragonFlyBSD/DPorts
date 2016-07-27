--- src/timer.cpp.intermediate	2016-07-21 15:57:15 UTC
+++ src/timer.cpp
@@ -118,7 +118,7 @@ void TimerPort::decTimer(timeout_t timeo
     active = true;
 }
 
-#if defined(HAVE_HIRES_TIMER) && !defined(__FreeBSD__)
+#if defined(HAVE_HIRES_TIMER) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 void TimerPort::sleepTimer(void)
 {
     struct timespec ts;
