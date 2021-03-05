--- deps/v8/src/trap-handler/trap-handler.h.intermediate	2021-03-05 13:38:34.000000000 +0000
+++ deps/v8/src/trap-handler/trap-handler.h
@@ -23,7 +23,7 @@ namespace trap_handler {
 #define V8_TRAP_HANDLER_SUPPORTED true
 #elif V8_TARGET_ARCH_X64 && V8_OS_MACOSX
 #define V8_TRAP_HANDLER_SUPPORTED true
-#elif V8_TARGET_ARCH_X64 && V8_OS_FREEBSD
+#elif V8_TARGET_ARCH_X64 && (V8_OS_FREEBSD || __DragonFly__)
 #define V8_TRAP_HANDLER_SUPPORTED true
 #else
 #define V8_TRAP_HANDLER_SUPPORTED false
