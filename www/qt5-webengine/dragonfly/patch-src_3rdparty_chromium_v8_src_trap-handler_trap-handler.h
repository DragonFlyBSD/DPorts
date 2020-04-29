--- src/3rdparty/chromium/v8/src/trap-handler/trap-handler.h.intermediate	2020-04-28 22:54:22 UTC
+++ src/3rdparty/chromium/v8/src/trap-handler/trap-handler.h
@@ -23,7 +23,7 @@ namespace trap_handler {
 #define V8_TRAP_HANDLER_SUPPORTED true
 #elif V8_TARGET_ARCH_X64 && V8_OS_MACOSX
 #define V8_TRAP_HANDLER_SUPPORTED true
-#elif V8_TARGET_ARCH_X64 && V8_OS_FREEBSD
+#elif V8_TARGET_ARCH_X64 && (V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD)
 #define V8_TRAP_HANDLER_SUPPORTED true
 #else
 #define V8_TRAP_HANDLER_SUPPORTED false
