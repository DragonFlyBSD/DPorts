diff --git base/threading/platform_thread.h base/threading/platform_thread.h
index 1ada1ab89a55..037d729e2ff9 100644
--- base/threading/platform_thread.h
+++ base/threading/platform_thread.h
@@ -59,6 +59,8 @@ class BASE_EXPORT PlatformThreadId {
   using UnderlyingType = uint64_t;
 #elif BUILDFLAG(IS_POSIX)
   using UnderlyingType = pid_t;
+#elif defined(OS_DRAGONFLY)
+  using UnderlyingType = lwpid_t;
 #endif
   static_assert(std::is_integral_v<UnderlyingType>, "Always an integer value.");
 
