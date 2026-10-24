--- src/liboslcomp/oslcomp.cpp.orig	2025-12-01 12:53:35 UTC
+++ src/liboslcomp/oslcomp.cpp
@@ -200,8 +200,15 @@ OSLCompilerImpl::preprocess_buffer(const std::string& 
 
     inst.setTarget(target);
 
+#if OSL_LLVM_VERSION >= 220
+    inst.createVirtualFileSystem();
+#endif
     inst.createFileManager();
+#if OSL_LLVM_VERSION >= 220
+    inst.createSourceManager();
+#else
     inst.createSourceManager(inst.getFileManager());
+#endif
     clang::SourceManager& sm = inst.getSourceManager();
     sm.setMainFileID(sm.createFileID(std::move(mbuf), clang::SrcMgr::C_User));
 
