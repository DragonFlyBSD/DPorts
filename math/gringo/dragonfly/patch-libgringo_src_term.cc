Patch from https://sourceforge.net/p/potassco/bugs/118/

--- libgringo/src/term.cc.orig	2015-07-08 19:03:13.000000000 +0300
+++ libgringo/src/term.cc
@@ -21,6 +21,7 @@
 #include "gringo/term.hh"
 #include "gringo/logger.hh"
 #include "gringo/graph.hh"
+#include <cmath> // for std::pow
 
 namespace Gringo {
 
