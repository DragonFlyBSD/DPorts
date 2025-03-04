--- src/tools/singlejar/diag.h.orig	Tue Jan  1 00:00:00 1980
+++ src/tools/singlejar/diag.h	Tue Mar
@@ -20,7 +20,7 @@
  * for portability.
  */
 #if defined(__APPLE__) || defined(__linux__) || defined(__FreeBSD__) || \
-    defined(__OpenBSD__)
+	defined(__OpenBSD__) || defined(__DragonFly__)
 
 #include <err.h>
 #define diag_err(...) err(__VA_ARGS__)
