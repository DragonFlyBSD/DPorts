--- src/3rdparty/chromium/v8/src/trap-handler/handler-inside-posix.cc.orig	2023-07-14 13:25:01 UTC
+++ src/3rdparty/chromium/v8/src/trap-handler/handler-inside-posix.cc
@@ -27,7 +27,7 @@
 
 #include <signal.h>
 
-#if defined(V8_OS_LINUX) || defined(V8_OS_FREEBSD)
+#if defined(V8_OS_LINUX) || defined(V8_OS_FREEBSD) || defined(V8_OS_DRAGONFLYBSD)
 #include <ucontext.h>
 #elif V8_OS_MACOSX
 #include <sys/ucontext.h>
@@ -116,7 +116,7 @@ bool TryHandleSignal(int signum, siginfo
     auto* context_ip = &uc->uc_mcontext->__ss.__pc;
 #elif V8_OS_MACOSX && V8_HOST_ARCH_X64
     auto* context_ip = &uc->uc_mcontext->__ss.__rip;
-#elif V8_OS_FREEBSD && V8_HOST_ARCH_X64
+#elif (V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD) && V8_HOST_ARCH_X64
     auto* context_ip = &uc->uc_mcontext.mc_rip;
 #elif V8_OS_FREEBSD && V8_HOST_ARCH_ARM64
     auto* context_ip = &uc->uc_mcontext.mc_pc;
