std::tie needs <tuple>; libstdc++ 12's <string> doesn't pull it in.

--- src/App/DepEdge.h.orig	2026-09-12 10:51:18 UTC
+++ src/App/DepEdge.h
@@ -25,6 +25,7 @@
 
 #include <FCGlobal.h>
 #include <string>
+#include <tuple>
 
 namespace App
 {
