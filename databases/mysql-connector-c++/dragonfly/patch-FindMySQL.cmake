--- FindMySQL.cmake.orig	2016-01-12 18:42:38 UTC
+++ FindMySQL.cmake
@@ -577,7 +577,7 @@ elseif(MYSQL_CONFIG_EXECUTABLE)
 
   # This code assumes there is just one "-L...." and that
   # no space between "-L" and the path
-  _mysql_config(MYSQL_LIB_DIR "(^| )-L" "--libs")
+  _mysql_config(MYSQL_LIB_DIR "^-L" "--libs")
   if(NOT MYSQL_LIB_DIR)
     message(FATAL_ERROR "Could not find the library dir from running "
                         "\"${MYSQL_CONFIG_EXECUTABLE}\"")
