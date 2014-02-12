
$FreeBSD: head/lang/clang-devel/files/patch-tools_clang_lib_Basic_Targets.cpp 332935 2013-11-06 00:13:02Z brooks $

--- tools/clang/lib/Basic/Targets.cpp.orig
+++ tools/clang/lib/Basic/Targets.cpp
@@ -4981,6 +4981,8 @@
     LongDoubleWidth = LongDoubleAlign = 128;
     LongDoubleFormat = &llvm::APFloat::IEEEquad;
     if (getTriple().getOS() == llvm::Triple::FreeBSD) {
+      IntMaxType = SignedLong;
+      UIntMaxType = UnsignedLong;
       LongDoubleWidth = LongDoubleAlign = 64;
       LongDoubleFormat = &llvm::APFloat::IEEEdouble;
     }
