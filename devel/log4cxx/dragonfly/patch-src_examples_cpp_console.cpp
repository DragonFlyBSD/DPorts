--- src/examples/cpp/console.cpp.intermediate	2016-09-02 10:09:53 UTC
+++ src/examples/cpp/console.cpp
@@ -23,6 +23,7 @@
 #include <log4cxx/logmanager.h>
 #include <iostream>
 #include <locale.h>
+#include <cstdio> // for fputs stderr etc
 
 using namespace log4cxx;
 using namespace log4cxx::helpers;
