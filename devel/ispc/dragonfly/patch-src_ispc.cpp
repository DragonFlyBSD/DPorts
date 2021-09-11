--- src/ispc.cpp.orig	2020-12-19 00:48:42 UTC
+++ src/ispc.cpp
@@ -1331,6 +1331,22 @@ std::string Target::GetTripleString() co
         triple.setVendor(llvm::Triple::VendorType::UnknownVendor);
         triple.setOS(llvm::Triple::OSType::FreeBSD);
         break;
+    case TargetOS::dragonfly:
+        if (m_arch == Arch::x86) {
+            triple.setArchName("i686");
+        } else if (m_arch == Arch::x86_64) {
+            triple.setArchName("amd64");
+        } else if (m_arch == Arch::arm) {
+            triple.setArchName("armv7");
+        } else if (m_arch == Arch::aarch64) {
+            triple.setArchName("aarch64");
+        } else {
+            Error(SourcePos(), "Unknown arch.");
+            exit(1);
+        }
+        triple.setVendor(llvm::Triple::VendorType::UnknownVendor);
+        triple.setOS(llvm::Triple::OSType::DragonFly);
+        break;
     case TargetOS::macos:
         // asserts
         if (m_arch != Arch::x86_64) {
