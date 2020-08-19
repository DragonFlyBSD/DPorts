--- src/3rdparty/chromium/base/profiler/register_context.h.intermediat	2020-08-18 13:08:51.000000000 +0000
+++ src/3rdparty/chromium/base/profiler/register_context.h
@@ -153,7 +153,7 @@ inline uintptr_t& RegisterContextInstruc
 
 #endif  // #if defined(ARCH_CPU_ARM_FAMILY) && defined(ARCH_CPU_32_BITS)
 
-#elif defined(OS_FREEBSD)
+#elif defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
 
 using RegisterContext = mcontext_t;
 
