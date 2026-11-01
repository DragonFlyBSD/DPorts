--- third_party/perfetto/src/base/periodic_task.cc.orig	2026-09-19 22:15:48 UTC
+++ third_party/perfetto/src/base/periodic_task.cc
@@ -27,7 +27,8 @@
 #if (PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX_BUT_NOT_QNX) || \
     PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD) ||           \
     (PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID) && __ANDROID_API__ >= 19)) && \
-    !PERFETTO_BUILDFLAG(PERFETTO_OS_OPENBSD)
+    !PERFETTO_BUILDFLAG(PERFETTO_OS_OPENBSD) && \
+    !defined(__DragonFly__)
 #include <sys/timerfd.h>
 #endif
 
@@ -49,7 +50,8 @@
 #if (PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX_BUT_NOT_QNX) || \
     PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD) ||           \
     (PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID) && __ANDROID_API__ >= 19)) && \
-    !PERFETTO_BUILDFLAG(PERFETTO_OS_OPENBSD)
+    !PERFETTO_BUILDFLAG(PERFETTO_OS_OPENBSD) && \
+    !defined(__DragonFly__)
   ScopedPlatformHandle tfd(
       timerfd_create(CLOCK_BOOTTIME, TFD_CLOEXEC | TFD_NONBLOCK));
   uint32_t phase_ms = GetNextDelayMs(GetBootTimeMs(), args);
