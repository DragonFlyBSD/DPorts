--- Sources/API/Core/System/error.h.orig	2006-10-27 04:55:01.000000000 +0300
+++ Sources/API/Core/System/error.h
@@ -48,6 +48,7 @@
 #endif
 
 #include <string>
+#include <cstdio> // for fprintf stderr
 
 //: Exception class in ClanLib.
 //- !group=Core/System!
