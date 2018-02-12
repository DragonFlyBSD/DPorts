--- src/tools/singlejar/diag.h.orig	1979-12-31 23:00:00 UTC
+++ src/tools/singlejar/diag.h
@@ -19,7 +19,7 @@
  * Various useful diagnostics functions from Linux err.h file, wrapped
  * for portability.
  */
-#if defined(__APPLE__) || defined(__linux__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <err.h>
 #define diag_err(...) err(__VA_ARGS__)
 #define diag_errx(...) errx(__VA_ARGS__)
