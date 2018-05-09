Do not criple float128 support, allow to use headers like <cmath>.
While there nuke, some leftover defines.

--- tools/clang/lib/Basic/Targets.cpp.orig	2017-11-27 14:54:45.000000000 +0000
+++ tools/clang/lib/Basic/Targets.cpp
@@ -318,11 +318,10 @@ protected:
                     MacroBuilder &Builder) const override {
     // DragonFly defines; list based off of gcc output
     Builder.defineMacro("__DragonFly__");
-    Builder.defineMacro("__DragonFly_cc_version", "100001");
     Builder.defineMacro("__ELF__");
-    Builder.defineMacro("__KPRINTF_ATTRIBUTE__");
-    Builder.defineMacro("__tune_i386__");
     DefineStd(Builder, "unix", Opts);
+    if (this->HasFloat128)
+      Builder.defineMacro("__FLOAT128__");
   }
 public:
   DragonFlyBSDTargetInfo(const llvm::Triple &Triple, const TargetOptions &Opts)
@@ -331,6 +330,7 @@ public:
     default:
     case llvm::Triple::x86:
     case llvm::Triple::x86_64:
+      this->HasFloat128 = true;
       this->MCountName = ".mcount";
       break;
     }
