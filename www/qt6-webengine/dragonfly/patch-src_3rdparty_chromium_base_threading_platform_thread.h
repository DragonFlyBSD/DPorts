diff --git base/threading/platform_thread.h base/threading/platform_thread.h
index 0658273e243..b4e98f1cb60 100644
--- src/3rdparty/chromium/base/threading/platform_thread.h
+++ src/3rdparty/chromium/base/threading/platform_thread.h
@@ -42,6 +42,8 @@ typedef zx_handle_t PlatformThreadId;
 typedef mach_port_t PlatformThreadId;
 #elif BUILDFLAG(IS_POSIX)
 typedef pid_t PlatformThreadId;
+#elif defined(OS_DRAGONFLY)
+typedef lwpid_t PlatformThreadId;
 #endif
 
 // Used to operate on threads.
