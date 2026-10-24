--- deps/v8/src/trap-handler/handler-inside-posix.h.orig
+++ deps/v8/src/trap-handler/handler-inside-posix.h
@@ -13,7 +13,7 @@
 namespace internal {
 namespace trap_handler {
 
-#if V8_OS_LINUX || V8_OS_FREEBSD
+#if V8_OS_LINUX || V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD
 constexpr int kOobSignal = SIGSEGV;
 #elif V8_OS_DARWIN
 constexpr int kOobSignal = SIGBUS;
