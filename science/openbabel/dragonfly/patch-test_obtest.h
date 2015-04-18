--- test/obtest.h.orig	2010-09-22 04:05:05 UTC
+++ test/obtest.h
@@ -40,7 +40,7 @@ const char* ob_expr(const char *expr) {
 
 
 // some utility functions
-typedef shared_ptr<OpenBabel::OBMol> OBMolPtr;
+typedef obsharedptr<OpenBabel::OBMol> OBMolPtr;
 
 struct OBTestUtil
 {
