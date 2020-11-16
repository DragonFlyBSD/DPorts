--- src/s2/third_party/absl/base/config.h.orig	2019-03-04 16:53:16 UTC
+++ src/s2/third_party/absl/base/config.h
@@ -272,7 +272,7 @@
 // POSIX.1-2001.
 #ifdef ABSL_HAVE_MMAP
 #error ABSL_HAVE_MMAP cannot be directly set
-#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) ||   \
+#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) ||   \
     defined(__ros__) || defined(__native_client__) || defined(__asmjs__) || \
     defined(__wasm__) || defined(__Fuchsia__) || defined(__sun) || \
     defined(__ASYLO__)
@@ -285,7 +285,7 @@
 // functions as defined in POSIX.1-2001.
 #ifdef ABSL_HAVE_PTHREAD_GETSCHEDPARAM
 #error ABSL_HAVE_PTHREAD_GETSCHEDPARAM cannot be directly set
-#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
+#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || \
     defined(__ros__)
 #define ABSL_HAVE_PTHREAD_GETSCHEDPARAM 1
 #endif
@@ -296,7 +296,7 @@
 // POSIX.1-2001.
 #ifdef ABSL_HAVE_SCHED_YIELD
 #error ABSL_HAVE_SCHED_YIELD cannot be directly set
-#elif defined(__linux__) || defined(__ros__) || defined(__native_client__)
+#elif defined(__linux__) || defined(__ros__) || defined(__native_client__) || defined(__DragonFly__)
 #define ABSL_HAVE_SCHED_YIELD 1
 #endif
 
