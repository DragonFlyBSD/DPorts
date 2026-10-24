--- libs/libmythbase/mythmiscutil.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmythbase/mythmiscutil.cpp
@@ -69,7 +69,7 @@ bool getUptime(time_t &uptime)
     else
         uptime = sinfo.uptime;
 
-#elif defined(__FreeBSD__) || CONFIG_DARWIN
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || CONFIG_DARWIN
 
     int            mib[2];
     struct timeval bootTime;
@@ -666,7 +666,7 @@ bool IsPulseAudioRunning(void)
     return false;
 #else
 
-#if CONFIG_DARWIN || (__FreeBSD__) || defined(__OpenBSD__)
+#if CONFIG_DARWIN || (__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     const char *command = "ps -ax | grep -i pulseaudio | grep -v grep > /dev/null";
 #else
     const char *command = "ps ch -C pulseaudio -o pid > /dev/null";
