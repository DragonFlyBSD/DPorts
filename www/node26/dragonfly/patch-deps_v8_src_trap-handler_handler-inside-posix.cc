--- deps/v8/src/trap-handler/handler-inside-posix.cc.orig
+++ deps/v8/src/trap-handler/handler-inside-posix.cc
@@ -28,7 +28,7 @@
 
 #include <signal.h>
 
-#if defined(V8_OS_LINUX) || defined(V8_OS_FREEBSD)
+#if defined(V8_OS_LINUX) || defined(V8_OS_FREEBSD) || defined(V8_OS_DRAGONFLYBSD)
 #include <ucontext.h>
 #elif V8_OS_DARWIN
 #include <sys/ucontext.h>
@@ -60,7 +60,7 @@
 #define CONTEXT_REG(reg, REG) &uc->uc_mcontext->__ss.__x[REG]
 #elif V8_OS_DARWIN
 #define CONTEXT_REG(reg, REG) &uc->uc_mcontext->__ss.__##reg
-#elif V8_OS_FREEBSD
+#elif V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD
 #define CONTEXT_REG(reg, REG) &uc->uc_mcontext.mc_##reg
 #else
 #error "Unsupported platform."
