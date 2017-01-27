--- src/base/test/decoderTest.cpp.orig	2016-09-05 11:35:14.000000000 +0300
+++ src/base/test/decoderTest.cpp
@@ -5,6 +5,7 @@
 #include "oggDecoder.h"
 #include <vector>
 #include <iostream>
+#include <cstring> // for memset
 
 int main(int argc, char* argv[])
 {
