--- FindMySQL.cmake.orig	2019-01-16 16:19:52 UTC
+++ FindMySQL.cmake
@@ -642,13 +642,15 @@ elseif(MYSQL_CONFIG_EXECUTABLE)
 
   else()
 
-    _mysql_config(MYSQL_LIBRARIES "(^| )-l" "--libs")
+    _mysql_config(MYSQL_LIBRARIES "-l" "--libs")
     FOREACH(__lib IN LISTS MYSQL_LIBRARIES)
       string(REGEX MATCH "mysqlclient([^ ]*)" _matched_lib __lib)
       IF(_matched_lib)
         set(_search_libs ${matched_lib})
       ENDIF()
     ENDFOREACH()
+    set(_search_libs "mysqlclient")
+    set(MYSQL_LIB_DIR "/usr/local/lib/mysql")
     # First library is assumed to be the client library
     # list(GET MYSQL_LIBRARIES 0 _search_libs)
     find_library(MYSQL_LIB
