Do not criple float128 support, allow to use headers like <cmath>.
While there nuke, some leftover defines.

--- tools/clang/lib/Basic/Targets/OSTargets.h.orig	2018-02-25 15:34:17.000000000 +0000
+++ tools/clang/lib/Basic/Targets/OSTargets.h
@@ -144,11 +144,10 @@ protected:
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
@@ -158,6 +157,7 @@ public:
     default:
     case llvm::Triple::x86:
     case llvm::Triple::x86_64:
+      this->HasFloat128 = true;
       this->MCountName = ".mcount";
       break;
     }
