--- src/openhbci/core/swiftparser.cpp.orig	2004-01-13 23:09:17.000000000 +0200
+++ src/openhbci/core/swiftparser.cpp
@@ -47,6 +47,7 @@
 #include <list>
 #include <string>
 #include <cctype>
+#include <cstdlib> // for atoi
 #include <stdio.h>
 #include <iostream>
 #include <assert.h>
