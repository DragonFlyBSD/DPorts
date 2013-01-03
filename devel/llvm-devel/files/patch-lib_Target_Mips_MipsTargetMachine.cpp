
$FreeBSD: ports/devel/llvm-devel/files/patch-lib_Target_Mips_MipsTargetMachine.cpp,v 1.2 2012/11/17 05:55:58 svnexp Exp $

--- lib/Target/Mips/MipsTargetMachine.cpp.orig
+++ lib/Target/Mips/MipsTargetMachine.cpp
@@ -54,6 +54,11 @@
     FrameLowering(MipsFrameLowering::create(*this, Subtarget)),
     TLInfo(*this), TSInfo(*this), JITInfo(),
     ELFWriterInfo(false, isLittle) {
+
+  // The system as doesn't understand CFI on FreeBSD
+#if defined(__FreeBSD__)
+  setMCUseCFI(false);
+#endif
 }
 
 void MipsebTargetMachine::anchor() { }
