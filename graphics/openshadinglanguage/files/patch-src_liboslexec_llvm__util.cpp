--- src/liboslexec/llvm_util.cpp.orig	2025-12-01 12:53:35 UTC
+++ src/liboslexec/llvm_util.cpp
@@ -718,7 +718,7 @@ LLVM_Util::debug_setup_compilation_unit(const char* co
         osl_identity,  // Identify the producer of debugging information and code. Usually this is a compiler version string.
         true,          // isOptimized
         "<todo>",  // This string lists command line options. This string is directly embedded in debug info output which may be used by a tool analyzing generated debugging information.
-        OSL_VERSION,  // This indicates runtime version for languages like Objective-C
+        0,  // This indicates runtime version for languages like Objective-C
         llvm::StringRef(),  // SplitName = he name of the file that we'll split debug info out into.
         llvm::DICompileUnit::DebugEmissionKind::
             LineTablesOnly,  // DICompileUnit::DebugEmissionKind
@@ -1581,7 +1581,11 @@ LLVM_Util::make_jit_execengine(std::string* err, Targe
     // TODO: investigate if reciprocals can be disabled by other means.
     // Perhaps enable UnsafeFPMath, then modify creation of DIV instructions
     // to remove the arcp (allow reciprocal) flag on that instructions
+#if OSL_LLVM_VERSION < 220
+    // UnsafeFPMath was removed from TargetOptions in LLVM 22; FP math
+    // control is now handled via per-instruction fast-math flags in IR.
     options.UnsafeFPMath = false;
+#endif
     // Since there are OSL language functions isinf and isnan,
     // we cannot assume there will not be infs and NANs
     options.NoInfsFPMath = false;
@@ -1846,7 +1850,11 @@ LLVM_Util::nvptx_target_machine()
         // N.B. 'Standard' only allow fusion of 'blessed' ops (currently just
         // fmuladd). To truly disable FMA and never fuse FP-ops, we need to
         // instead use llvm::FPOpFusion::Strict.
+#if OSL_LLVM_VERSION < 220
+        // UnsafeFPMath was removed from TargetOptions in LLVM 22; FP math
+        // control is now handled via per-instruction fast-math flags in IR.
         options.UnsafeFPMath                           = 1;
+#endif
         options.NoInfsFPMath                           = 1;
         options.NoNaNsFPMath                           = 1;
         options.HonorSignDependentRoundingFPMathOption = 0;
@@ -1862,7 +1870,11 @@ LLVM_Util::nvptx_target_machine()
         // Verify that the NVPTX target has been initialized
         std::string error;
         const llvm::Target* llvm_target
+#if OSL_LLVM_VERSION >= 220
+            = llvm::TargetRegistry::lookupTarget(ModuleTriple, error);
+#else
             = llvm::TargetRegistry::lookupTarget(ModuleTriple.str(), error);
+#endif
         OSL_ASSERT(llvm_target
                    && "PTX compile error: LLVM Target is not initialized");
 
