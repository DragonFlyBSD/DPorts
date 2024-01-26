diff --git third_party/perfetto/include/perfetto/base/time.h third_party/perfetto/include/perfetto/base/time.h
index 18c30bdd298..dd9b64a669a 100644
--- third_party/perfetto/include/perfetto/base/time.h
+++ third_party/perfetto/include/perfetto/base/time.h
@@ -167,7 +167,7 @@ inline TimeNanos GetTimeInternalNs(clockid_t clk_id) {
 // Return ns from boot. Conversely to GetWallTimeNs, this clock counts also time
 // during suspend (when supported).
 inline TimeNanos GetBootTimeNs() {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   return GetTimeInternalNs(kWallTimeClockSource);
 #else
   // Determine if CLOCK_BOOTTIME is available on the first call.
@@ -187,7 +187,7 @@ inline TimeNanos GetWallTimeNs() {
 inline TimeNanos GetWallTimeRawNs() {
 #if defined(__OpenBSD__)
   return GetTimeInternalNs(CLOCK_MONOTONIC);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return GetTimeInternalNs(CLOCK_MONOTONIC_FAST);
 #else
   return GetTimeInternalNs(CLOCK_MONOTONIC_RAW);
