
$FreeBSD: lang/clang31/files/patch-tools_clang_include_clang_Analysis_Analyses_FormatString.h 303039 2012-08-23 21:02:09Z jkim $

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
