--- tools/clang/lib/Driver/ToolChains.cpp.orig	2012-09-03 11:05:50.000000000 +0200
+++ tools/clang/lib/Driver/ToolChains.cpp	2013-01-03 15:36:25.414128000 +0100
@@ -2378,7 +2378,10 @@
 
   getFilePaths().push_back(getDriver().Dir + "/../lib");
   getFilePaths().push_back("/usr/lib");
-  getFilePaths().push_back("/usr/lib/gcc41");
+  if (llvm::sys::fs::exists("/usr/lib/gcc47"))
+    getFilePaths().push_back("/usr/lib/gcc47");
+  else
+    getFilePaths().push_back("/usr/lib/gcc44");
 }
 
 Tool &DragonFly::SelectTool(const Compilation &C, const JobAction &JA,
