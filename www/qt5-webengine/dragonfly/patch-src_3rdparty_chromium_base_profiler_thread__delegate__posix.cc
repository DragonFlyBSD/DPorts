--- src/3rdparty/chromium/base/profiler/thread_delegate_posix.cc.orig	2021-01-24 18:51:20 UTC
+++ src/3rdparty/chromium/base/profiler/thread_delegate_posix.cc
@@ -9,7 +9,7 @@
 #include "base/stl_util.h"
 
 #include "build/build_config.h"
-#if defined(OS_FREEBSD)
+#if defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
 #include <pthread_np.h>
 #endif
 
@@ -20,7 +20,7 @@ namespace {
 uintptr_t GetThreadStackBaseAddressImpl(
     SamplingProfilerThreadToken thread_token) {
   pthread_attr_t attr;
-#if defined(OS_FREEBSD)
+#if defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
   pthread_attr_init(&attr);
   pthread_attr_get_np(thread_token.pthread_id, &attr);
 #elif defined(OS_LINUX)
@@ -119,7 +119,7 @@ std::vector<uintptr_t*> ThreadDelegatePo
   return {
       // Return the set of callee-save registers per the x86-64 System V ABI
       // section 3.2.1, plus the stack pointer.
-#if defined(OS_FREEBSD)
+#if defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
       reinterpret_cast<uintptr_t*>(&thread_context->mc_rbp),
       reinterpret_cast<uintptr_t*>(&thread_context->mc_rbx),
       reinterpret_cast<uintptr_t*>(&thread_context->mc_r12),
