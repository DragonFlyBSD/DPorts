--- tools/clang/lib/Driver/Tools.cpp.orig	2015-11-22 10:12:21 UTC
+++ tools/clang/lib/Driver/Tools.cpp
@@ -8933,7 +8933,6 @@ void dragonfly::Linker::ConstructJob(Com
                                      const char *LinkingOutput) const {
   const Driver &D = getToolChain().getDriver();
   ArgStringList CmdArgs;
-  bool UseGCC47 = llvm::sys::fs::exists("/usr/lib/gcc47");
 
   if (!D.SysRoot.empty())
     CmdArgs.push_back(Args.MakeArgString("--sysroot=" + D.SysRoot));
@@ -8950,7 +8949,8 @@ void dragonfly::Linker::ConstructJob(Com
       CmdArgs.push_back("-dynamic-linker");
       CmdArgs.push_back("/usr/libexec/ld-elf.so.2");
     }
-    CmdArgs.push_back("--hash-style=both");
+    CmdArgs.push_back("--hash-style=gnu");
+    CmdArgs.push_back("--enable-new-dtags");
   }
 
   // When building 32-bit code on DragonFly/pc64, we have to explicitly
@@ -8998,21 +8998,11 @@ void dragonfly::Linker::ConstructJob(Com
 
   if (!Args.hasArg(options::OPT_nostdlib) &&
       !Args.hasArg(options::OPT_nodefaultlibs)) {
-    // FIXME: GCC passes on -lgcc, -lgcc_pic and a whole lot of
-    //         rpaths
-    if (UseGCC47)
-      CmdArgs.push_back("-L/usr/lib/gcc47");
-    else
-      CmdArgs.push_back("-L/usr/lib/gcc44");
+    CmdArgs.push_back("-L/usr/lib/gcc50");
 
     if (!Args.hasArg(options::OPT_static)) {
-      if (UseGCC47) {
-        CmdArgs.push_back("-rpath");
-        CmdArgs.push_back("/usr/lib/gcc47");
-      } else {
-        CmdArgs.push_back("-rpath");
-        CmdArgs.push_back("/usr/lib/gcc44");
-      }
+      CmdArgs.push_back("-rpath");
+      CmdArgs.push_back("/usr/lib/gcc50");
     }
 
     if (D.CCCIsCXX()) {
@@ -9027,28 +9017,20 @@ void dragonfly::Linker::ConstructJob(Com
       CmdArgs.push_back("-lc");
     }
 
-    if (UseGCC47) {
-      if (Args.hasArg(options::OPT_static) ||
-          Args.hasArg(options::OPT_static_libgcc)) {
+    if (Args.hasArg(options::OPT_static) ||
+        Args.hasArg(options::OPT_static_libgcc)) {
         CmdArgs.push_back("-lgcc");
         CmdArgs.push_back("-lgcc_eh");
-      } else {
-        if (Args.hasArg(options::OPT_shared_libgcc)) {
+    } else {
+      if (Args.hasArg(options::OPT_shared_libgcc)) {
           CmdArgs.push_back("-lgcc_pic");
           if (!Args.hasArg(options::OPT_shared))
             CmdArgs.push_back("-lgcc");
-        } else {
+      } else {
           CmdArgs.push_back("-lgcc");
           CmdArgs.push_back("--as-needed");
           CmdArgs.push_back("-lgcc_pic");
           CmdArgs.push_back("--no-as-needed");
-        }
-      }
-    } else {
-      if (Args.hasArg(options::OPT_shared)) {
-        CmdArgs.push_back("-lgcc_pic");
-      } else {
-        CmdArgs.push_back("-lgcc");
       }
     }
   }
