Should be ok.
--- pdb/enumgen.pl.orig	2018-08-19 16:47:18 UTC
+++ pdb/enumgen.pl
@@ -211,7 +211,7 @@ while (<>) {
        \*/@@gx;
 
     if (m@^\s*typedef\s+enum\s*
-	   ({)?\s*
+	   (\{)?\s*
 	   (?:/\*<
 	     (([^*]|\*(?!/))*)
 	    >\s*\*/)?
