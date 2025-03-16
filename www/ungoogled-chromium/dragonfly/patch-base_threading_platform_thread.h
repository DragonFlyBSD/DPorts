diff --git base/threading/platform_thread.h base/threading/platform_thread.h
index fcdb2b64e477..f9783b9cbbf8 100644
--- base/threading/platform_thread.h
+++ base/threading/platform_thread.h
@@ -53,6 +53,8 @@ typedef mach_port_t PlatformThreadId;
 typedef uint64_t PlatformThreadId;
 #elif BUILDFLAG(IS_POSIX)
 typedef pid_t PlatformThreadId;
+#elif defined(OS_DRAGONFLY)
+typedef lwpid_t PlatformThreadId;
 #endif
 static_assert(std::is_integral_v<PlatformThreadId>, "Always an integer value.");
 
