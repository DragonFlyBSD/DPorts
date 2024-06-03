diff --git v8/src/api/api.cc v8/src/api/api.cc
index 7bad0c9ddcd..c5b9640e53e 100644
--- src/3rdparty/chromium/v8/src/api/api.cc
+++ src/3rdparty/chromium/v8/src/api/api.cc
@@ -140,7 +140,8 @@
 #include "src/wasm/wasm-serialization.h"
 #endif  // V8_ENABLE_WEBASSEMBLY
 
-#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD
+#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD || \
+  V8_OS_DRAGONFLYBSD
 #include <signal.h>
 
 #if V8_ENABLE_WEBASSEMBLY
@@ -6206,7 +6207,8 @@ bool v8::V8::Initialize(const int build_config) {
   return true;
 }
 
-#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD
+#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD || \
+  V8_OS_DRAGONFLYBSD
 bool TryHandleWebAssemblyTrapPosix(int sig_code, siginfo_t* info,
                                    void* context) {
 #if V8_ENABLE_WEBASSEMBLY && V8_TRAP_HANDLER_SUPPORTED
