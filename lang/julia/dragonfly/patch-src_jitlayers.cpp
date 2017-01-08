--- src/jitlayers.cpp.orig	2016-09-20 05:54:21.000000000 +0300
+++ src/jitlayers.cpp
@@ -1053,7 +1053,7 @@ void jl_dump_native(const char *bc_fname
         jl_TargetMachine->getTargetCPU(),
         jl_TargetMachine->getTargetFeatureString(),
         jl_TargetMachine->Options,
-#if defined(_OS_LINUX_) || defined(_OS_FREEBSD_)
+#if defined(_OS_LINUX_) || defined(_OS_FREEBSD_) || defined(_OS_DRAGONFLY_)
         Reloc::PIC_,
 #elif defined(LLVM39)
         Optional<Reloc::Model>(),
