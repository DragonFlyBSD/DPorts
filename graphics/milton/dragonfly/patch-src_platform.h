--- src/platform.h.orig	2026-11-06 03:01:40 UTC
+++ src/platform.h
@@ -225,13 +225,12 @@ u64 perf_counter();
 float perf_count_to_sec(u64 counter);
 
 
+#if defined(__cplusplus)
+}
+#endif
+
 #if defined(_WIN32)
 #include "platform_windows.h"
-#elif defined(__linux__) || defined(__MACH__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__MACH__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include "platform_unix.h"
-#endif
-
-
-#if defined(__cplusplus)
-}
 #endif
