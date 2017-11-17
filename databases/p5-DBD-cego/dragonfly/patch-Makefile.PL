--- Makefile.PL.orig	2017-11-05 06:51:54 UTC
+++ Makefile.PL
@@ -51,8 +51,8 @@ WriteMakefile(
     'MYEXTLIB'    => $opt->{'prefix'} . "/lib/libcego.$so* " 
 	      . $opt->{'prefix'} . "/lib/liblfcxml.$so* " 
 	      . $opt->{'prefix'} . "/lib/liblfcbase.$so",
-    "CC" => "clang++",
-    "LD" => "clang++",
+    "CC" => "c++",
+    "LD" => "c++",
     "XSPROTOARG" => "-noprototypes",
     'OPTIMIZE'      => '-O3 -DNDEBUG=1',
     'XSOPT'             => '-C++',
