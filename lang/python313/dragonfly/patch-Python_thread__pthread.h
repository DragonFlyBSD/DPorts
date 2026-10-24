--- Python/thread_pthread.h.orig	2026-08-05 12:25:43 UTC
+++ Python/thread_pthread.h
@@ -50,7 +50,7 @@
  * as it also depends on the other configure options like chosen sanitizer
  * runtimes.
  */
-#if defined(__FreeBSD__) && defined(THREAD_STACK_SIZE) && THREAD_STACK_SIZE == 0
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && defined(THREAD_STACK_SIZE) && THREAD_STACK_SIZE == 0
 #undef  THREAD_STACK_SIZE
 #define THREAD_STACK_SIZE       0x400000
 #endif
