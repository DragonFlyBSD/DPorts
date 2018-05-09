Do not criple float128 support, allow to use headers like <cmath>.
While there nuke, some leftover defines.

--- tools/clang/lib/Basic/Targets/OSTargets.h.orig	2017-12-05 17:46:17.000000000 +0000
+++ tools/clang/lib/Basic/Targets/OSTargets.h
@@ -138,11 +138,10 @@ protected:
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
@@ -152,6 +151,7 @@ public:
     default:
     case llvm::Triple::x86:
     case llvm::Triple::x86_64:
+      this->HasFloat128 = true;
       this->MCountName = ".mcount";
       break;
     }
