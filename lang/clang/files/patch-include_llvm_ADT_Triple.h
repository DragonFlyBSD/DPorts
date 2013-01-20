
$FreeBSD: ports/lang/clang/files/patch-include_llvm_ADT_Triple.h,v 1.1 2013/01/10 18:01:27 svnexp Exp $

--- include/llvm/ADT/Triple.h.orig
+++ include/llvm/ADT/Triple.h
@@ -296,6 +296,11 @@
     return isMacOSX() || getOS() == Triple::IOS;
   }
 
+  /// isOSFreeBSD - Is this FreeBSD OS
+  bool isOSFreeBSD() const {
+    return getOS() == Triple::FreeBSD;
+  }
+
   /// \brief Tests for either Cygwin or MinGW OS
   bool isOSCygMing() const {
     return getOS() == Triple::Cygwin || getOS() == Triple::MinGW32;
