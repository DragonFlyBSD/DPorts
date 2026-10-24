--- third_party/perfetto/include/perfetto/base/time.h.orig	2026-09-19 22:13:24 UTC
+++ third_party/perfetto/include/perfetto/base/time.h
@@ -280,6 +280,11 @@
 // Return ns from boot. Conversely to GetWallTimeNs, this clock counts also time
 // during suspend (when supported).
 inline TimeNanos GetBootTimeNs() {
+#if defined(__DragonFly__)
+  // DragonFly has no CLOCK_BOOTTIME. CLOCK_UPTIME counts from boot, which is
+  // the semantic this function wants.
+  return GetTimeInternalNs(CLOCK_UPTIME);
+#else
   // Determine if CLOCK_BOOTTIME is available on the first call.
   static const clockid_t kBootTimeClockSource = [] {
     struct timespec ts = {};
@@ -287,6 +292,7 @@
     return res == 0 ? CLOCK_BOOTTIME : kWallTimeClockSource;
   }();
   return GetTimeInternalNs(kBootTimeClockSource);
+#endif
 }
 
 inline TimeNanos GetWallTimeNs() {
