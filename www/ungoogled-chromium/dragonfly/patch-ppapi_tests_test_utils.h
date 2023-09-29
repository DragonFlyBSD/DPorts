diff --git ppapi/tests/test_utils.h ppapi/tests/test_utils.h
index 52a0c81bef2..4dc9fa483be 100644
--- ppapi/tests/test_utils.h
+++ ppapi/tests/test_utils.h
@@ -312,6 +312,8 @@ do { \
 #define PPAPI_OS_WIN 1
 #elif defined(__FreeBSD__)
 #define PPAPI_OS_FREEBSD 1
+#elif defined(__DragonFly__)
+#define PPAPI_OS_DRAGONFLY 1
 #elif defined(__OpenBSD__)
 #define PPAPI_OS_OPENBSD 1
 #elif defined(__sun)
@@ -322,7 +324,8 @@ do { \
 
 /* These are used to determine POSIX-like implementations vs Windows. */
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
-    defined(__OpenBSD__) || defined(__sun) || defined(__native_client__)
+    defined(__OpenBSD__) || defined(__DragonFly__) || defined(__sun) || \
+    defined(__native_client__)
 #define PPAPI_POSIX 1
 #endif
 
