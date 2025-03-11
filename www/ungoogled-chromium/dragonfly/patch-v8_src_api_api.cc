diff --git v8/src/api/api.cc v8/src/api/api.cc
index 013d4b1da3a3..b0b8e5a7dca7 100644
--- v8/src/api/api.cc
+++ v8/src/api/api.cc
@@ -148,7 +148,8 @@
 #include "src/wasm/wasm-serialization.h"
 #endif  // V8_ENABLE_WEBASSEMBLY
 
-#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD
+#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD || \
+  V8_OS_DRAGONFLYBSD
 #include <signal.h>
 #include <unistd.h>
 
@@ -6511,7 +6512,8 @@ bool v8::V8::Initialize(const int build_config) {
   return true;
 }
 
-#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD
+#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD || \
+  V8_OS_DRAGONFLYBSD
 bool TryHandleWebAssemblyTrapPosix(int sig_code, siginfo_t* info,
                                    void* context) {
 #if V8_ENABLE_WEBASSEMBLY && V8_TRAP_HANDLER_SUPPORTED
