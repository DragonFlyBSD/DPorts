--- libgnomecups/snmpinter.C.orig	2004-08-19 17:47:56.000000000 +0300
+++ libgnomecups/snmpinter.C
@@ -8,6 +8,7 @@
 #include <string.h>
 #include <iostream>
 #include <string>
+#include <cstdlib> // for realloc?
 
 static const std::string HPSTR("JETDIRECT");
 static const std::string LEXMARKSTR("Lexmark");
