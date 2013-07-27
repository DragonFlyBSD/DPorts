
$FreeBSD: lang/clang33/files/patch-tools_clang_include_clang_Analysis_Analyses_FormatString.h 310189 2013-01-10 16:34:44Z brooks $

--- tools/clang/include/clang/Analysis/Analyses/FormatString.h.orig
+++ tools/clang/include/clang/Analysis/Analyses/FormatString.h
@@ -117,7 +117,7 @@
       // C99 conversion specifiers.
     cArg,
     dArg,
-    DArg, // Apple extension
+    DArg, // Apple and FreeBSD extension
     iArg,
     IntArgBeg = dArg, IntArgEnd = iArg,
 
@@ -148,6 +148,9 @@
 
     // ** Printf-specific **
 
+    // FreeBSD specific specifiers
+    bArg,
+
     // Objective-C specific specifiers.
     ObjCObjArg,  // '@'
     ObjCBeg = ObjCObjArg, ObjCEnd = ObjCObjArg,
