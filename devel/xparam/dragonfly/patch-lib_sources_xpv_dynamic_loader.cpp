--- lib/sources/xpv_dynamic_loader.cpp.bak	2016-07-04 10:36:07.000000000 +0300
+++ lib/sources/xpv_dynamic_loader.cpp
@@ -209,7 +209,7 @@ void dynamic_load(const string& type_nam
 	loader.load(type_name);
 }
 
-int file_selector(struct dirent* my_dirent)
+int file_selector(const struct dirent* my_dirent)
 {
 	string filename = my_dirent->d_name;
 	string wanted_ending = '.' + DynamicLoaderBase::mapfile_extension();
