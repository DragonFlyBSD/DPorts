
$FreeBSD: head/lang/clang-devel/files/patch-tools_clang_include_clang_Analysis_Analyses_FormatString.h 369283 2014-09-25 19:10:19Z brooks $

--- tools/clang/include/clang/Analysis/Analyses/FormatString.h.orig
+++ tools/clang/include/clang/Analysis/Analyses/FormatString.h
@@ -122,9 +122,10 @@
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
 
