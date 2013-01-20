
$FreeBSD: ports/lang/clang-devel/files/patch-tools_clang_include_clang_Analysis_Analyses_FormatString.h,v 1.4 2013/01/10 18:52:06 svnexp Exp $

--- tools/clang/include/clang/Analysis/Analyses/FormatString.h.orig
+++ tools/clang/include/clang/Analysis/Analyses/FormatString.h
@@ -115,9 +115,10 @@
   enum Kind {
     InvalidSpecifier = 0,
       // C99 conversion specifiers.
+    bArg, // FreeBSD extension
     cArg,
     dArg,
-    DArg, // Apple extension
+    DArg, // Apple or FreeBSD extension
     iArg,
     IntArgBeg = dArg, IntArgEnd = iArg,
 
@@ -147,7 +148,7 @@
     SArg,
 
     // ** Printf-specific **
-
+    
     // Objective-C specific specifiers.
     ObjCObjArg,  // '@'
     ObjCBeg = ObjCObjArg, ObjCEnd = ObjCObjArg,
