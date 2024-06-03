diff --git third_party/perfetto/include/perfetto/base/time.h third_party/perfetto/include/perfetto/base/time.h
index 4a2de950e3f..93dc566eb52 100644
--- src/3rdparty/chromium/third_party/perfetto/include/perfetto/base/time.h
+++ src/3rdparty/chromium/third_party/perfetto/include/perfetto/base/time.h
@@ -142,7 +142,7 @@ inline TimeNanos GetTimeInternalNs(clockid_t clk_id) {
 // Return ns from boot. Conversely to GetWallTimeNs, this clock counts also time
 // during suspend (when supported).
 inline TimeNanos GetBootTimeNs() {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   return GetTimeInternalNs(kWallTimeClockSource);
 #else
   // Determine if CLOCK_BOOTTIME is available on the first call.
