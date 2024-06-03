diff --git v8/src/trap-handler/trap-handler.h v8/src/trap-handler/trap-handler.h
index 833b4514ee4..36a4673aed3 100644
--- src/3rdparty/chromium/v8/src/trap-handler/trap-handler.h
+++ src/3rdparty/chromium/v8/src/trap-handler/trap-handler.h
@@ -20,7 +20,7 @@ namespace trap_handler {
 // X64 on Linux, Windows, MacOS, FreeBSD.
 #if V8_HOST_ARCH_X64 && V8_TARGET_ARCH_X64 &&                        \
     ((V8_OS_LINUX && !V8_OS_ANDROID) || V8_OS_WIN || V8_OS_DARWIN || \
-     V8_OS_FREEBSD || V8_OS_OPENBSD)
+     V8_OS_FREEBSD || V8_OS_OPENBSD || V8_OS_DRAGONFLYBSD)
 #define V8_TRAP_HANDLER_SUPPORTED true
 // Arm64 (non-simulator) on Mac.
 #elif V8_TARGET_ARCH_ARM64 && V8_HOST_ARCH_ARM64 && V8_OS_DARWIN
