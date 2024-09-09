--- build2/libbuild2/cc/compile-rule.cxx.orig	2023-06-22 06:17:54 UTC
+++ build2/libbuild2/cc/compile-rule.cxx
@@ -3722,7 +3722,7 @@ namespace build2
 
               if (ot == otype::s)
               {
-                if (tclass == "linux" || tclass == "bsd")
+                if (tclass == "linux" || tclass == "bsd" || tsys == "dragonflybsd")
                   args.push_back ("-fPIC");
               }
 
@@ -5237,7 +5237,7 @@ namespace build2
 
               if (ot == otype::s)
               {
-                if (tclass == "linux" || tclass == "bsd")
+                if (tclass == "linux" || tclass == "bsd" || tsys == "dragonflybsd")
                   args.push_back ("-fPIC");
               }
 
@@ -7363,7 +7363,7 @@ namespace build2
           {
             // On Darwin, Win32 -fPIC is the default.
             //
-            if (tclass == "linux" || tclass == "bsd")
+            if (tclass == "linux" || tclass == "bsd" || tsys == "dragonflybsd")
               args.push_back ("-fPIC");
           }
 
