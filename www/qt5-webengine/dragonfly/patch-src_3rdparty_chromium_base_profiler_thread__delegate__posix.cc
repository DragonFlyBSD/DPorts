--- src/3rdparty/chromium/base/profiler/thread_delegate_posix.cc.intermediate	2020-08-18 15:04:06.000000000 +0000
+++ src/3rdparty/chromium/base/profiler/thread_delegate_posix.cc
@@ -3,7 +3,7 @@
 // found in the LICENSE file.
 
 #include <pthread.h>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
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
@@ -31,7 +31,7 @@ uintptr_t GetThreadStackBaseAddressImpl(
   size_t size;
   pthread_attr_getstack(&attr, &address, &size);
   const uintptr_t base_address = reinterpret_cast<uintptr_t>(address) + size;
-#if defined(OS_FREEBSD)
+#if defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
   pthread_attr_destroy(&attr);
 #endif
   return base_address;
@@ -103,7 +103,7 @@ std::vector<uintptr_t*> ThreadDelegatePo
   return {
       // Return the set of callee-save registers per the x86-64 System V ABI
       // section 3.2.1, plus the stack pointer.
-#if defined(OS_FREEBSD)
+#if defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
       reinterpret_cast<uintptr_t*>(&thread_context->mc_rbp),
       reinterpret_cast<uintptr_t*>(&thread_context->mc_rbx),
       reinterpret_cast<uintptr_t*>(&thread_context->mc_r12),
