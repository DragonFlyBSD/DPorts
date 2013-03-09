--- Cdk.xs.orig	2003-12-10 20:40:41.000000000 +0000
+++ Cdk.xs
@@ -9,7 +9,7 @@
 #include <XSUB.h>
 
 #define CDK_PERL_EXT
-#include <cdk/cdk.h>
+#include <cdk.h>
 
 /* Prior to perl5.005, the PL_ prefix wasn't used for things such
    as PL_rs.  Define the PL_ macros that we use if necessary. */
