
$FreeBSD: ports/lang/clang/files/patch-tools_clang_include_clang_Analysis_Analyses_FormatString.h,v 1.4 2012/11/17 05:58:48 svnexp Exp $

--- tools/clang/include/clang/Analysis/Analyses/FormatString.h.orig
+++ tools/clang/include/clang/Analysis/Analyses/FormatString.h
@@ -143,6 +143,10 @@
 
     // ** Printf-specific **
 
+    // FreeBSD specific specifiers
+    bArg,
+    DArg,
+
     // Objective-C specific specifiers.
     ObjCObjArg,  // '@'
     ObjCBeg = ObjCObjArg, ObjCEnd = ObjCObjArg,
