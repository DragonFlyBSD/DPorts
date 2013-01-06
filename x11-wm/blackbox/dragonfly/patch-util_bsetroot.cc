--- util/bsetroot.cc.orig	2005-03-15 08:01:37.000000000 +0100
+++ util/bsetroot.cc	2013-01-06 11:53:40.987517000 +0100
@@ -27,6 +27,8 @@
 #include <Pen.hh>
 #include <Texture.hh>
 
+#include <stdlib.h>
+#include <cstring>
 #include <cctype>
 
 #include <X11/Xatom.h>
