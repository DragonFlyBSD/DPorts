--- src/Tag.cc.orig	2003-04-07 09:36:06.000000000 +0300
+++ src/Tag.cc
@@ -22,6 +22,10 @@
 #include <utility> // pair
 #include <locale.h>
 #include <iostream>
+#include <cstring>
+extern "C" {
+#include <strings.h>
+}
 
 const Tag *Tag::find(const std::string &tp) const
 {  const_iterator i=find(begin(),tp);
