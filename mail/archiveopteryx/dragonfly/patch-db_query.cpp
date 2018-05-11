db/query.cpp:769:10: error: declaration of 'uint strlen(const char*)' conflicts with built-in declaration 'long unsigned int strlen(const char*)' [-Werror=builtin-declaration-mismatch]

--- db/query.cpp.orig	2014-03-10 13:44:59.000000000 +0000
+++ db/query.cpp
@@ -766,7 +766,7 @@ Row::Row( const PgRowDescription * desc,
 
 
 extern "C" {
-    uint strlen( const char * );
+    size_t strlen( const char * );
 };
 
 
