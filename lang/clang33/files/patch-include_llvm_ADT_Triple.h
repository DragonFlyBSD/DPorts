
$FreeBSD: lang/clang33/files/patch-include_llvm_ADT_Triple.h 310189 2013-01-10 16:34:44Z brooks $

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
