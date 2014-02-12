
$FreeBSD: head/lang/clang-devel/files/patch-include_llvm_ADT_Triple.h 340725 2014-01-22 17:40:44Z mat $

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
