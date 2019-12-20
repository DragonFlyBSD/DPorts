--- src/3rdparty/chromium/v8/src/trap-handler/handler-inside-posix.cc.orig	2019-12-20 19:21:59 UTC
+++ src/3rdparty/chromium/v8/src/trap-handler/handler-inside-posix.cc
@@ -27,7 +27,7 @@
 
 #include <signal.h>
 
-#if defined(V8_OS_LINUX) || defined(V8_OS_FREEBSD)
+#if defined(V8_OS_LINUX) || defined(V8_OS_FREEBSD) || defined(V8_OS_DRAGONFLYBSD)
 #include <ucontext.h>
 #elif V8_OS_MACOSX
 #include <sys/ucontext.h>
@@ -112,7 +112,7 @@ bool TryHandleSignal(int signum, siginfo
     auto* context_rip = &uc->uc_mcontext.gregs[REG_RIP];
 #elif V8_OS_MACOSX
     auto* context_rip = &uc->uc_mcontext->__ss.__rip;
-#elif V8_OS_FREEBSD
+#elif defined(V8_OS_FREEBSD) || defined(V8_OS_DRAGONFLYBSD)
     auto* context_rip = &uc->uc_mcontext.mc_rip;
 #else
 #error Unsupported platform
