
$FreeBSD: head/lang/clang-devel/files/patch-tools_clang_lib_Basic_Targets.cpp 365552 2014-08-21 12:43:41Z brooks $

--- tools/clang/lib/Basic/Targets.cpp.orig
+++ tools/clang/lib/Basic/Targets.cpp
@@ -5723,6 +5723,7 @@
     LongDoubleWidth = LongDoubleAlign = 128;
     LongDoubleFormat = &llvm::APFloat::IEEEquad;
     if (getTriple().getOS() == llvm::Triple::FreeBSD) {
+      IntMaxType = SignedLong;
       LongDoubleWidth = LongDoubleAlign = 64;
       LongDoubleFormat = &llvm::APFloat::IEEEdouble;
     }
