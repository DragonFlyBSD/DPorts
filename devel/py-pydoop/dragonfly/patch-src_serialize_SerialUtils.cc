--- src/serialize/SerialUtils.cc.orig	2015-09-04 18:15:51.000000000 +0300
+++ src/serialize/SerialUtils.cc
@@ -21,6 +21,7 @@
 #include <errno.h>
 #include <rpc/types.h>
 #include <rpc/xdr.h>
+#include <cstdio>  // for fopen fseek etc
 #include <string>
 #include <string.h>
 
