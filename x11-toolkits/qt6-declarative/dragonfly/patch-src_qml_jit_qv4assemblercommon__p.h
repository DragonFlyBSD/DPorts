--- src/qml/jit/qv4assemblercommon_p.h.orig	2022-12-12 14:33:20 UTC
+++ src/qml/jit/qv4assemblercommon_p.h
@@ -30,7 +30,8 @@ namespace QV4 {
 namespace JIT {
 
 #if defined(Q_PROCESSOR_X86_64) || defined(ENABLE_ALL_ASSEMBLERS_FOR_REFACTORING_PURPOSES)
-#if defined(Q_OS_LINUX) || defined(Q_OS_QNX) || defined(Q_OS_FREEBSD) || defined(Q_OS_DARWIN)
+#if defined(Q_OS_LINUX) || defined(Q_OS_QNX) || defined(Q_OS_FREEBSD) || defined(Q_OS_DARWIN) || \
+    defined(Q_OS_DRAGONFLY)
 
 class PlatformAssembler_X86_64_SysV : public JSC::MacroAssembler<JSC::MacroAssemblerX86_64>
 {
