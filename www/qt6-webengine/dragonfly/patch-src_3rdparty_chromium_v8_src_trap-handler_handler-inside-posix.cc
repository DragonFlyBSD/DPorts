diff --git v8/src/trap-handler/handler-inside-posix.cc v8/src/trap-handler/handler-inside-posix.cc
index e23844e9a53..057c9690504 100644
--- src/3rdparty/chromium/v8/src/trap-handler/handler-inside-posix.cc
+++ src/3rdparty/chromium/v8/src/trap-handler/handler-inside-posix.cc
@@ -27,7 +27,7 @@
 
 #include <signal.h>
 
-#if defined(V8_OS_LINUX) || defined(V8_OS_FREEBSD)
+#if defined(V8_OS_LINUX) || defined(V8_OS_FREEBSD) || defined(V8_OS_DRAGONFLYBSD)
 #include <ucontext.h>
 #elif V8_OS_DARWIN
 #include <sys/ucontext.h>
@@ -51,7 +51,7 @@ namespace trap_handler {
 #define CONTEXT_REG(reg, REG) &uc->uc_mcontext.gregs[REG_##REG]
 #elif V8_OS_DARWIN
 #define CONTEXT_REG(reg, REG) &uc->uc_mcontext->__ss.__##reg
-#elif V8_OS_FREEBSD
+#elif V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD
 #define CONTEXT_REG(reg, REG) &uc->uc_mcontext.mc_##reg
 #elif V8_OS_OPENBSD
 #define CONTEXT_REG(reg, REG) &uc->sc_##reg
