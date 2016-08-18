--- framework/imd/vmdsock.cpp.orig	2005-05-07 17:40:25.000000000 +0300
+++ framework/imd/vmdsock.cpp
@@ -32,6 +32,7 @@ namespace ProtoMol {
 #include <stdio.h>
 #include <stdlib.h>
 #include <string>
+#include <cstring>
 using std::string;
 
 #if defined(WIN32)
