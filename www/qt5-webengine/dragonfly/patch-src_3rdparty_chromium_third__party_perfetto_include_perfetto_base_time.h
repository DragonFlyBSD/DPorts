--- src/3rdparty/chromium/third_party/perfetto/include/perfetto/base/time.h.intermediate	2020-08-18 13:01:50.000000000 +0000
+++ src/3rdparty/chromium/third_party/perfetto/include/perfetto/base/time.h
@@ -123,7 +123,7 @@ inline TimeNanos GetTimeInternalNs(clock
 // Return ns from boot. Conversely to GetWallTimeNs, this clock counts also time
 // during suspend (when supported).
 inline TimeNanos GetBootTimeNs() {
-#if PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD)
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD) || PERFETTO_BUILDFLAG(PERFETTO_OS_DRAGONFLY)
   return GetTimeInternalNs(kWallTimeClockSource);
 #else
   // Determine if CLOCK_BOOTTIME is available on the first call.
