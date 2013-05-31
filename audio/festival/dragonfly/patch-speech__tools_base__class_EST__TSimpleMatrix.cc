--- speech_tools/base_class/EST_TSimpleMatrix.cc.orig	2004-09-30 12:53:35.000000000 +0000
+++ speech_tools/base_class/EST_TSimpleMatrix.cc
@@ -42,6 +42,7 @@
 
 #include "EST_TSimpleMatrix.h"
 #include "EST_TVector.h"
+#include <cstring>
 #include <fstream>
 #include <iostream>
 #include "EST_cutils.h"
@@ -96,7 +97,7 @@ void EST_TSimpleMatrix<T>::resize(int ne
 	{
 	  int copy_r = Lof(this->num_rows(), new_rows);
 
-	  just_resize(new_rows, new_cols, &old_vals);
+	  this->just_resize(new_rows, new_cols, &old_vals);
 
 	  memcpy((void *)this->p_memory, 
 		 (const void *)old_vals,
@@ -125,9 +126,9 @@ void EST_TSimpleMatrix<T>::resize(int ne
 	  int copy_r = Lof(this->num_rows(), new_rows);
 	  int copy_c = Lof(this->num_columns(), new_cols);
 	  
-	  just_resize(new_rows, new_cols, &old_vals);
+	  this->just_resize(new_rows, new_cols, &old_vals);
 
-	  set_values(old_vals,
+	  this->set_values(old_vals,
 		     old_row_step, old_column_step,
 		     0, copy_r,
 		     0, copy_c);
