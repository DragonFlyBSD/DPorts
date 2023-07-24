--- src/mongo/util/time_support.cpp.orig	2022-11-01 18:21:44 UTC
+++ src/mongo/util/time_support.cpp
@@ -846,7 +846,7 @@ private:
 // Find minimum timer resolution of OS
 Nanoseconds getMinimumTimerResolution() {
     Nanoseconds minTimerResolution;
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__EMSCRIPTEN__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__EMSCRIPTEN__) || defined(__DragonFly__)
     struct timespec tp;
     clock_getres(CLOCK_REALTIME, &tp);
     minTimerResolution = Nanoseconds{tp.tv_nsec};
