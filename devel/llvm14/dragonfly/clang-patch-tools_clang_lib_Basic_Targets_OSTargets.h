--- clang/lib/Basic/Targets/OSTargets.h.orig	2022-03-14 09:44:55 UTC
+++ clang/lib/Basic/Targets/OSTargets.h
@@ -239,6 +239,7 @@ public:
     default:
     case llvm::Triple::x86:
     case llvm::Triple::x86_64:
+      this->HasFloat128 = true;
       this->MCountName = ".mcount";
       break;
     case llvm::Triple::mips:
