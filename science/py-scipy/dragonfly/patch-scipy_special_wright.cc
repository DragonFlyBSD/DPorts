--- scipy/special/wright.cc.orig	2023-05-01 18:37:44 UTC
+++ scipy/special/wright.cc
@@ -73,6 +73,7 @@
 /**********************************************************************/
 
 #include <Python.h>
+using namespace std;
 extern "C" {
 #include <math.h>
 #include "sf_error.h"
