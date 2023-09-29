diff --git third_party/perfetto/include/perfetto/base/time.h third_party/perfetto/include/perfetto/base/time.h
index 68a5e000c99..28a46208db8 100644
--- third_party/perfetto/include/perfetto/base/time.h
+++ third_party/perfetto/include/perfetto/base/time.h
@@ -157,7 +157,7 @@ inline TimeNanos GetTimeInternalNs(clockid_t clk_id) {
 // Return ns from boot. Conversely to GetWallTimeNs, this clock counts also time
 // during suspend (when supported).
 inline TimeNanos GetBootTimeNs() {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   return GetTimeInternalNs(kWallTimeClockSource);
 #else
   // Determine if CLOCK_BOOTTIME is available on the first call.
@@ -177,7 +177,7 @@ inline TimeNanos GetWallTimeNs() {
 inline TimeNanos GetWallTimeRawNs() {
 #if defined(__OpenBSD__)
   return GetTimeInternalNs(CLOCK_MONOTONIC);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return GetTimeInternalNs(CLOCK_MONOTONIC_FAST);
 #else
   return GetTimeInternalNs(CLOCK_MONOTONIC_RAW);
