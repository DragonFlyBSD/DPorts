--- onnxruntime/core/platform/posix/env.cc.orig	2026-09-10 06:09:41 UTC
+++ onnxruntime/core/platform/posix/env.cc
@@ -274,7 +274,7 @@
   static void* ThreadMain(void* param) {
     std::unique_ptr<Param> p(static_cast<Param*>(param));
     ORT_TRY {
-#if !defined(__APPLE__) && !defined(__ANDROID__) && !defined(__wasm__) && !defined(_AIX) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__ANDROID__) && !defined(__wasm__) && !defined(_AIX) && !defined(__FreeBSD__) && !defined(__DragonFly__)
       if (p->affinity.has_value() && !p->affinity->empty()) {
         cpu_set_t cpuset;
         CPU_ZERO(&cpuset);
