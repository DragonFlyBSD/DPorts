
$FreeBSD: ports/devel/binutils/files/patch-gold_script.cc,v 1.2 2012/11/17 05:55:35 svnexp Exp $

--- gold/script.cc.dist	2012-09-01 19:52:34.000000000 -0500
+++ gold/script.cc	2012-09-01 19:53:22.000000000 -0500
@@ -2534,8 +2534,6 @@
     fprintf(f, "      }\n");
 }
 
-} // End namespace gold.
-
 // The remaining functions are extern "C", so it's clearer to not put
 // them in namespace gold.
 
@@ -3391,3 +3389,5 @@
 
   return length;
 }
+
+} // End namespace gold.
