--- src/mongo/util/time_support.cpp.orig	2019-01-31 22:55:37 UTC
+++ src/mongo/util/time_support.cpp
@@ -933,7 +933,7 @@ private:
 // Find minimum timer resolution of OS
 Nanoseconds getMinimumTimerResolution() {
     Nanoseconds minTimerResolution;
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     struct timespec tp;
     clock_getres(CLOCK_REALTIME, &tp);
     minTimerResolution = Nanoseconds{tp.tv_nsec};
