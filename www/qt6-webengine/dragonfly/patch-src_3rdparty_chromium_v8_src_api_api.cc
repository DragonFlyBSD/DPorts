--- src/3rdparty/chromium/v8/src/api/api.cc.orig	2026-10-23 12:00:00 UTC
+++ src/3rdparty/chromium/v8/src/api/api.cc
@@ -159,7 +159,8 @@
 #include "src/objects/intl-objects.h"
 #endif  // V8_INTL_SUPPORT
 
-#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD
+#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD || \
+  V8_OS_DRAGONFLYBSD
 #include <signal.h>
 #include <unistd.h>
 
@@ -6454,7 +6455,8 @@ bool v8::V8::Initialize(const int build_config) {
   return true;
 }
 
-#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD
+#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD || \
+  V8_OS_DRAGONFLYBSD
 bool TryHandleWebAssemblyTrapPosix(int sig_code, siginfo_t* info,
                                    void* context) {
 #if V8_ENABLE_WEBASSEMBLY && V8_TRAP_HANDLER_SUPPORTED
