diff --git v8/src/trap-handler/handler-inside-posix.cc v8/src/trap-handler/handler-inside-posix.cc
index 1f876c7664a5..07bd8aa389ad 100644
--- v8/src/trap-handler/handler-inside-posix.cc
+++ v8/src/trap-handler/handler-inside-posix.cc
@@ -27,7 +27,7 @@
 
 #include <signal.h>
 
-#if defined(V8_OS_LINUX) || defined(V8_OS_FREEBSD)
+#if defined(V8_OS_LINUX) || defined(V8_OS_FREEBSD) || defined(V8_OS_DRAGONFLYBSD)
 #include <ucontext.h>
 #elif V8_OS_DARWIN
 #include <sys/ucontext.h>
@@ -59,7 +59,7 @@ namespace trap_handler {
 #define CONTEXT_REG(reg, REG) &uc->uc_mcontext->__ss.__x[REG]
 #elif V8_OS_DARWIN
 #define CONTEXT_REG(reg, REG) &uc->uc_mcontext->__ss.__##reg
-#elif V8_OS_FREEBSD
+#elif V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD
 #define CONTEXT_REG(reg, REG) &uc->uc_mcontext.mc_##reg
 #elif V8_OS_OPENBSD
 #define CONTEXT_REG(reg, REG) &uc->sc_##reg
