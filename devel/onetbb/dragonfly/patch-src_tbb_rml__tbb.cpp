--- src/tbb/rml_tbb.cpp.orig	2021-10-04 09:50:18 UTC
+++ src/tbb/rml_tbb.cpp
@@ -50,7 +50,7 @@ namespace rml {
 #define RML_SERVER_NAME "irml" DEBUG_SUFFIX ".dll"
 #elif __APPLE__
 #define RML_SERVER_NAME "libirml" DEBUG_SUFFIX ".dylib"
-#elif __FreeBSD__ || __NetBSD__ || __OpenBSD__ || __sun || _AIX
+#elif __FreeBSD__ || __NetBSD__ || __OpenBSD__ || __sun || _AIX || __DragonFly__
 #define RML_SERVER_NAME "libirml" DEBUG_SUFFIX ".so"
 #elif __unix__
 #define RML_SERVER_NAME "libirml" DEBUG_SUFFIX ".so.1"
