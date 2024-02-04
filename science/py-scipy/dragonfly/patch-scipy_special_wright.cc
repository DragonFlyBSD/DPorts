--- scipy/special/wright.cc.orig	2023-10-22 02:07:16 UTC
+++ scipy/special/wright.cc
@@ -1,5 +1,6 @@
 #include <Python.h>
 #include "wright.hh"
+using namespace std;
 
 /**********************************************************************/
 /* wrightomega is the simple routine for evaluating the wright omega  */
