
$FreeBSD: lang/clang-devel/files/patch-tools_clang_lib_Basic_Targets.cpp 318206 2013-05-14 22:10:59Z brooks $

--- tools/clang/lib/Basic/Targets.cpp.orig
+++ tools/clang/lib/Basic/Targets.cpp
@@ -271,6 +271,8 @@
           break;
         case llvm::Triple::mips:
         case llvm::Triple::mipsel:
+        case llvm::Triple::mips64:
+        case llvm::Triple::mips64el:
         case llvm::Triple::ppc:
         case llvm::Triple::ppc64:
           this->MCountName = "_mcount";
