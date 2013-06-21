--- cmake/readline.cmake.orig	2013-05-21 15:18:39.000000000 +0000
+++ cmake/readline.cmake
@@ -131,10 +131,10 @@ ENDMACRO()
 
 MACRO (FIND_SYSTEM_EDITLINE)
   FIND_PATH(FOUND_EDITLINE_READLINE
-    NAMES editline/readline.h
+    NAMES readline/readline.h
   )
   IF(FOUND_EDITLINE_READLINE)
-    SET(EDITLINE_INCLUDE_DIR "${FOUND_EDITLINE_READLINE}/editline")
+    SET(EDITLINE_INCLUDE_DIR "${FOUND_EDITLINE_READLINE}/readline")
   ELSE()
     # Different path on FreeBSD
     FIND_PATH(FOUND_EDIT_READLINE_READLINE
