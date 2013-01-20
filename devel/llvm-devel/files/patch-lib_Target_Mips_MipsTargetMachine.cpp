
$FreeBSD: ports/devel/llvm-devel/files/patch-lib_Target_Mips_MipsTargetMachine.cpp,v 1.3 2013/01/10 18:51:49 svnexp Exp $

--- lib/Target/Mips/MipsTargetMachine.cpp.orig
+++ lib/Target/Mips/MipsTargetMachine.cpp
@@ -55,6 +55,11 @@
     InstrInfo(MipsInstrInfo::create(*this)),
     FrameLowering(MipsFrameLowering::create(*this, Subtarget)),
     TLInfo(*this), TSInfo(*this), JITInfo() {
+
+  // The system as doesn't understand CFI on FreeBSD
+#if defined(__FreeBSD__)
+  setMCUseCFI(false);
+#endif
 }
 
 void MipsebTargetMachine::anchor() { }
