--- mozglue/misc/Now.cpp.orig	2026-10-22 23:18:00 UTC
+++ mozglue/misc/Now.cpp
@@ -68,6 +68,13 @@
 #elif defined(XP_UNIX)  // including BSDs and Android
 #  include <time.h>
 
+// DragonFly has no CLOCK_BOOTTIME. CLOCK_UPTIME counts from boot, which is
+// what NowIncludingSuspendMs() wants; without it ProcessUptimeMs() is
+// always Nothing().
+#  if defined(__DragonFly__) && !defined(CLOCK_BOOTTIME)
+#    define CLOCK_BOOTTIME CLOCK_UPTIME
+#  endif
+
 // Number of nanoseconds in a millisecond.
 static constexpr uint64_t kNSperMS = 1000000;
 
