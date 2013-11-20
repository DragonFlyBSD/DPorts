
$FreeBSD: lang/clang32/files/patch-include_llvm_ADT_Triple.h 330777 2013-10-18 22:06:39Z brooks $

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
