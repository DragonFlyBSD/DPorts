--- clang/lib/Basic/Targets/OSTargets.h.orig	2021-04-06 16:38:18 UTC
+++ clang/lib/Basic/Targets/OSTargets.h
@@ -184,11 +184,10 @@ protected:
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
@@ -198,6 +197,7 @@ public:
     default:
     case llvm::Triple::x86:
     case llvm::Triple::x86_64:
+      this->HasFloat128 = true;
       this->MCountName = ".mcount";
       break;
     }
