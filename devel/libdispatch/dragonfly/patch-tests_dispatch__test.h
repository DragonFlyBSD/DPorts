--- tests/dispatch_test.h.orig	2021-09-17 04:54:52 UTC
+++ tests/dispatch_test.h
@@ -21,7 +21,8 @@
 #include <stdbool.h>
 #include <dispatch/dispatch.h>
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || \
+	defined(__DragonFly__)
 #include <generic_unix_port.h>
 #elif defined(_WIN32)
 #include <generic_win_port.h>
