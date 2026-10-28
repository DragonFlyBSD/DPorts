--- src/ispc.cpp.orig	2026-10-26 01:17:16 UTC
+++ src/ispc.cpp
@@ -2784,6 +2784,16 @@ llvm::Triple Target::GetTriple() const {
         triple.setVendor(llvm::Triple::VendorType::UnknownVendor);
         triple.setOS(llvm::Triple::OSType::FreeBSD);
         break;
+    case TargetOS::dragonfly:
+        if (m_arch == Arch::x86_64) {
+            triple.setArchName("x86_64");
+        } else {
+            Error(SourcePos(), "Unknown arch.");
+            exit(1);
+        }
+        triple.setVendor(llvm::Triple::VendorType::UnknownVendor);
+        triple.setOS(llvm::Triple::OSType::DragonFly);
+        break;
     case TargetOS::macos:
         // asserts
         if (m_arch == Arch::x86_64) {
