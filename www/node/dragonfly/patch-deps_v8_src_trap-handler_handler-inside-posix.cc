--- deps/v8/src/trap-handler/handler-inside-posix.cc.orig	2021-07-08 13:39:02.013835000 +0200
+++ deps/v8/src/trap-handler/handler-inside-posix.cc	2021-07-08 19:07:18.723500000 +0200
@@ -27,7 +27,7 @@
 
 #include <signal.h>
 
-#if defined(V8_OS_LINUX) || defined(V8_OS_FREEBSD)
+#if defined(V8_OS_LINUX) || defined(V8_OS_FREEBSD) || defined(V8_OS_DRAGONFLYBSD)
 #include <ucontext.h>
 #elif V8_OS_MACOSX
 #include <sys/ucontext.h>
@@ -114,6 +114,8 @@
     auto* context_ip = &uc->uc_mcontext->__ss.__rip;
 #elif V8_OS_FREEBSD && V8_TARGET_ARCH_X64
     auto* context_ip = &uc->uc_mcontext.mc_rip;
+#elif V8_OS_DRAGONFLYBSD && V8_TARGET_ARCH_X64
+    auto* context_ip = &uc->uc_mcontext.mc_rip;
 #else
 #error Unsupported platform
 #endif
