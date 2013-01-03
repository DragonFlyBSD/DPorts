--- tools/clang/lib/Frontend/InitHeaderSearch.cpp.orig	2012-08-09 01:57:20.000000000 +0200
+++ tools/clang/lib/Frontend/InitHeaderSearch.cpp	2013-01-03 15:36:25.514128000 +0100
@@ -24,6 +24,7 @@
 #include "llvm/ADT/Twine.h"
 #include "llvm/Support/raw_ostream.h"
 #include "llvm/Support/ErrorHandling.h"
+#include "llvm/Support/FileSystem.h"
 #include "llvm/Support/Path.h"
 
 #include "clang/Config/config.h" // C_INCLUDE_DIRS
@@ -404,7 +405,10 @@
     AddMinGWCPlusPlusIncludePaths("c:/MinGW/lib/gcc", "mingw32", "4.3.0");
     break;
   case llvm::Triple::DragonFly:
-    AddPath("/usr/include/c++/4.1", CXXSystem, true, false, false);
+    if (llvm::sys::fs::exists("/usr/lib/gcc47"))
+      AddPath("/usr/include/c++/4.7", CXXSystem, true, false, false);
+    else
+      AddPath("/usr/include/c++/4.4", CXXSystem, true, false, false);
     break;
   case llvm::Triple::FreeBSD:
     // FreeBSD 8.0
