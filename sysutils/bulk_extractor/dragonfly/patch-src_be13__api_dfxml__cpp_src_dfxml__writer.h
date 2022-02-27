--- src/be13_api/dfxml_cpp/src/dfxml_writer.h.orig	2021-10-17 19:46:50 UTC
+++ src/be13_api/dfxml_cpp/src/dfxml_writer.h
@@ -493,7 +493,7 @@ public:
         xmlout("library", "", std::string("name=\"libewf\" version=\"") + libewf_get_version() + "\"",false);
 #endif
 #ifdef HAVE_EXIV2
-        xmlout("library", "", std::string("name=\"exiv2\" version=\"") + Exiv2::version() + "\"",false);
+        xmlout("library", "", std::string("name=\"exiv2\" version=\"") + "0.0" + "\"",false);
 #endif
 #ifdef HAVE_HASHDB
         xmlout("library", "", std::string("name=\"hashdb\" version=\"") + hashdb_version() + "\"",false);
