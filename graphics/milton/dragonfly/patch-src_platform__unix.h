--- src/platform_unix.h.intermediate	2021-12-28 06:18:00.000000000 +0000
+++ src/platform_unix.h
@@ -56,8 +56,14 @@
 #define platform_milton_log unix_log
 #define platform_milton_log_args unix_log_args
 
+#if defined(__cplusplus)
+extern "C" {
+#endif
 void unix_log(char* format, ...);
 void unix_log_args(char* format, va_list args);
+#if defined(__cplusplus)
+}
+#endif
 
 #if defined(__MACH__)
 // Include header for our SDL hook.
