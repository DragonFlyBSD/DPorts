--- src/3rdparty/chromium/third_party/perfetto/include/perfetto/ext/base/time.h.intermediate	2020-04-21 17:37:26 UTC
+++ src/3rdparty/chromium/third_party/perfetto/include/perfetto/ext/base/time.h
@@ -123,7 +123,8 @@ inline TimeNanos GetTimeInternalNs(clock
 // Return ns from boot. Conversely to GetWallTimeNs, this clock counts also time
 // during suspend (when supported).
 inline TimeNanos GetBootTimeNs() {
-#if PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD)
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD) || \
+  PERFETTO_BUILDFLAG(PERFETTO_OS_DRAGONFLY)
   return GetTimeInternalNs(kWallTimeClockSource);
 #else
   // Determine if CLOCK_BOOTTIME is available on the first call.
