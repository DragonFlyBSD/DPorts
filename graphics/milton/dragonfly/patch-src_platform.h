--- src/platform.h.intermediate	2021-12-28 06:18:00.000000000 +0000
+++ src/platform.h
@@ -225,13 +225,12 @@ u64 perf_counter();
 float perf_count_to_sec(u64 counter);
 
 
+#if defined(__cplusplus)
+}
+#endif
+
 #if defined(_WIN32)
 #include "platform_windows.h"
 #elif defined(__linux__) || defined(__MACH__) || defined(__FreeBSD__)
 #include "platform_unix.h"
 #endif
-
-
-#if defined(__cplusplus)
-}
-#endif
