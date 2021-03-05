--- deps/v8/src/api/api.cc.orig	2021-02-09 14:11:20 UTC
+++ deps/v8/src/api/api.cc
@@ -112,7 +112,7 @@
 #include "src/wasm/wasm-result.h"
 #include "src/wasm/wasm-serialization.h"
 
-#if V8_OS_LINUX || V8_OS_MACOSX || V8_OS_FREEBSD
+#if V8_OS_LINUX || V8_OS_MACOSX || V8_OS_FREEBSD || __DragonFly__
 #include <signal.h>
 #include "include/v8-wasm-trap-handler-posix.h"
 #include "src/trap-handler/handler-inside-posix.h"
