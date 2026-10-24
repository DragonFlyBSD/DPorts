--- src/util/futex.h.orig	2026-07-02 19:34:59 UTC
+++ src/util/futex.h
@@ -31,6 +31,8 @@
 #define UTIL_FUTEX_SUPPORTED 1
 #elif defined(__FreeBSD__)
 #define UTIL_FUTEX_SUPPORTED 1
+#elif defined(__DragonFly__)
+#define UTIL_FUTEX_SUPPORTED 1
 #elif defined(__OpenBSD__)
 #define UTIL_FUTEX_SUPPORTED 1
 #elif defined(_WIN32) && !defined(WINDOWS_NO_FUTEX)
