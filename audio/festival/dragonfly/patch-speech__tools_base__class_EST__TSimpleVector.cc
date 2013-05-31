--- speech_tools/base_class/EST_TSimpleVector.cc.orig	2006-07-06 12:57:18.000000000 +0000
+++ speech_tools/base_class/EST_TSimpleVector.cc
@@ -42,6 +42,7 @@
 
 #include "EST_TSimpleVector.h"
 #include "EST_matrix_support.h"
+#include <cstring>
 #include <fstream>
 #include "EST_cutils.h"
 
@@ -69,7 +70,7 @@ template<class T> void EST_TSimpleVector
   T *old_vals =NULL;
   int old_offset = this->p_offset;
 
-  just_resize(newn, &old_vals);
+  this->just_resize(newn, &old_vals);
 
   if (set && old_vals)
     {
