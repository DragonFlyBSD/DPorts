--- src/cmake/modules/FindLLVM.cmake.orig	2025-12-01 12:53:35 UTC
+++ src/cmake/modules/FindLLVM.cmake
@@ -116,7 +116,8 @@ foreach (COMPONENT clangFrontend clangDriver clangSeri
 foreach (COMPONENT clangFrontend clangDriver clangSerialization
                    clangParse clangSema clangAnalysis clangAST
                    clangASTMatchers clangEdit clangLex
-                   clangSupport clangAPINotes clangBasic)
+                   clangSupport clangAPINotes clangBasic
+                   clangOptions clangAnalysisLifetimeSafety)
     find_library ( _CLANG_${COMPONENT}_LIBRARY
                   NAMES ${COMPONENT}
                   PATHS ${LLVM_LIB_DIR}
