--- tochnog.h.orig	2013-10-12 03:33:16 UTC
+++ tochnog.h
@@ -37,7 +37,6 @@
 #include "tnhypo.h"
 #include "matrix.h"
 #include "time.h"
-#include "f2c.h"
 
 using namespace std;
  
@@ -57,6 +56,8 @@ enum {
   VERSION_EXTRUDE,      // mesh for extrude
   MVERSION              // maximum number of versions, this must be the last item
 }; 
+
+#define TOCHNOG_VERSION "Latest-jan-2014"
 
   // constants
 #define MCHAR 100  // maximum length of names
