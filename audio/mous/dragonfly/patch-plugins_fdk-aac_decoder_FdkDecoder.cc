--- plugins/fdk-aac/decoder/FdkDecoder.cc.orig	2018-04-02 13:44:48 UTC
+++ plugins/fdk-aac/decoder/FdkDecoder.cc
@@ -1,6 +1,8 @@
 #include "FdkDecoder.h"
 #include <stdio.h>
 #include <iostream>
+#include <strings.h> // for strcasecmp()
+
 using namespace std;
 
 FdkDecoder::FdkDecoder()
