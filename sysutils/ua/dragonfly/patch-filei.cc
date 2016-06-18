--- filei.cc.orig	2007-12-05 12:35:25.000000000 +0200
+++ filei.cc
@@ -37,6 +37,7 @@
 extern "C" {
 #include <stdlib.h>
 #include <unistd.h>
+#include <strings.h>
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <openssl/md5.h>
