
$FreeBSD: lang/clang31/files/patch-tools_clang_include_clang_Analysis_Analyses_FormatString.h 340725 2014-01-22 17:40:44Z mat $

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
