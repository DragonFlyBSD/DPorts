diff --git base/threading/platform_thread.h base/threading/platform_thread.h
index f0740c11906..8c76e252919 100644
--- base/threading/platform_thread.h
+++ base/threading/platform_thread.h
@@ -47,6 +47,8 @@ typedef zx_handle_t PlatformThreadId;
 typedef mach_port_t PlatformThreadId;
 #elif BUILDFLAG(IS_POSIX)
 typedef pid_t PlatformThreadId;
+#elif defined(OS_DRAGONFLY)
+typedef lwpid_t PlatformThreadId;
 #endif
 static_assert(std::is_integral_v<PlatformThreadId>, "Always an integer value.");
 
