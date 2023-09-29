diff --git base/threading/platform_thread.h base/threading/platform_thread.h
index 88714870a2c..ce3fc199b88 100644
--- base/threading/platform_thread.h
+++ base/threading/platform_thread.h
@@ -44,6 +44,8 @@ typedef zx_handle_t PlatformThreadId;
 typedef mach_port_t PlatformThreadId;
 #elif BUILDFLAG(IS_POSIX)
 typedef pid_t PlatformThreadId;
+#elif defined(OS_DRAGONFLY)
+typedef lwpid_t PlatformThreadId;
 #endif
 static_assert(std::is_integral_v<PlatformThreadId>, "Always an integer value.");
 
