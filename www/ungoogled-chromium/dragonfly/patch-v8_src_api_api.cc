diff --git v8/src/api/api.cc v8/src/api/api.cc
index 9f74cd03940..f31ad24743b 100644
--- v8/src/api/api.cc
+++ v8/src/api/api.cc
@@ -141,7 +141,8 @@
 #include "src/wasm/wasm-serialization.h"
 #endif  // V8_ENABLE_WEBASSEMBLY
 
-#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD
+#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD || \
+  V8_OS_DRAGONFLYBSD
 #include <signal.h>
 #include <unistd.h>
 
@@ -6356,7 +6357,8 @@ bool v8::V8::Initialize(const int build_config) {
   return true;
 }
 
-#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD
+#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD || \
+  V8_OS_DRAGONFLYBSD
 bool TryHandleWebAssemblyTrapPosix(int sig_code, siginfo_t* info,
                                    void* context) {
 #if V8_ENABLE_WEBASSEMBLY && V8_TRAP_HANDLER_SUPPORTED
