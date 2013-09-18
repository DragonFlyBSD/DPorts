--- speech_tools/base_class/EST_TVector.cc.orig	2006-07-14 13:26:36.000000000 +0000
+++ speech_tools/base_class/EST_TVector.cc
@@ -173,11 +173,12 @@ void EST_TVector<T>::just_resize(int new
 
       new_m = new T[new_cols];
 
-      if (p_memory != NULL)
+      if (p_memory != NULL) {
 	if (old_vals != NULL)
 	  *old_vals = p_memory;
 	else if (!p_sub_matrix)
 	  delete [] (p_memory-p_offset);
+      }
 
       p_memory = new_m;
       //cout << "vr: mem: " << p_memory << " (" << (int)p_memory << ")\n";
