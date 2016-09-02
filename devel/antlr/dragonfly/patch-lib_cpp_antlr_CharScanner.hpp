--- lib/cpp/antlr/CharScanner.hpp.orig	2006-11-01 23:37:17.000000000 +0200
+++ lib/cpp/antlr/CharScanner.hpp
@@ -18,6 +18,11 @@
 #include <cctype>
 #endif
 
+#include <cstdio>    // for EOF
+extern "C" {
+#include <strings.h> // for strcasecmp
+}
+
 #if ( _MSC_VER == 1200 )
 // VC6 seems to need this
 // note that this is not a standard C++ include file.
