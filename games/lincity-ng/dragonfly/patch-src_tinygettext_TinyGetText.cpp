--- src/tinygettext/TinyGetText.cpp.orig	2009-01-25 20:20:41.000000000 +0000
+++ src/tinygettext/TinyGetText.cpp
@@ -31,6 +31,7 @@
 #include "TinyGetText.hpp"
 #include "PhysfsStream/PhysfsStream.hpp"
 #include "findlocale.hpp"
+#undef getchar
 
 //#define TRANSLATION_DEBUG
 
