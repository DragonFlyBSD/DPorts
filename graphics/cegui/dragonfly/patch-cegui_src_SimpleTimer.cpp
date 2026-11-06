--- cegui/src/SimpleTimer.cpp.orig	2016-04-28 19:12:57 UTC
+++ cegui/src/SimpleTimer.cpp
@@ -38,7 +38,7 @@ double CEGUI::SimpleTimer::currentTime()
     return timeGetTime() / 1000.0;
 }
 
-#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__HAIKU__) || defined(__CYGWIN__) || defined(__MINGW32__)
+#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__HAIKU__) || defined(__CYGWIN__) || defined(__MINGW32__)
 #include <sys/time.h>
 double CEGUI::SimpleTimer::currentTime()
 {
