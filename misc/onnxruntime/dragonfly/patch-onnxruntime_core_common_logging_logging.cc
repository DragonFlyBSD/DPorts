--- onnxruntime/core/common/logging/logging.cc.orig	2026-09-10 06:09:41 UTC
+++ onnxruntime/core/common/logging/logging.cc
@@ -275,6 +275,8 @@
   long tid;
   thr_self(&tid);
   return static_cast<unsigned int>(tid);
+#elif defined(__DragonFly__)
+  return static_cast<unsigned int>(lwp_gettid());
 #elif defined(__wasm__) || defined(_AIX)
   return static_cast<unsigned int>(pthread_self());
 #else
