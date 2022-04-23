--- src/3rdparty/chromium/v8/src/trap-handler/handler-inside-posix.h.intermediate	2020-05-06 14:21:29.000000000 +0000
+++ src/3rdparty/chromium/v8/src/trap-handler/handler-inside-posix.h
@@ -12,7 +12,7 @@ namespace v8 {
 namespace internal {
 namespace trap_handler {
 
-#if V8_OS_LINUX || V8_OS_FREEBSD
+#if V8_OS_LINUX || V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD
 constexpr int kOobSignal = SIGSEGV;
 #elif V8_OS_MACOSX
 constexpr int kOobSignal = SIGBUS;
