
$FreeBSD: ports/lang/clang-devel/files/patch-tools_clang_include_clang_Analysis_Analyses_FormatString.h,v 1.3 2012/11/17 05:58:48 svnexp Exp $

--- tools/clang/include/clang/Analysis/Analyses/FormatString.h.orig
+++ tools/clang/include/clang/Analysis/Analyses/FormatString.h
@@ -141,6 +141,10 @@
     SArg,
 
     // ** Printf-specific **
+    
+    // FreeBSD specific specifiers
+    bArg,
+    DArg,
 
     // Objective-C specific specifiers.
     ObjCObjArg,  // '@'
