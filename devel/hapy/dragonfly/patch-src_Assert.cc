--- src/Assert.cc.orig	2006-07-07 23:36:25.000000000 +0300
+++ src/Assert.cc
@@ -4,6 +4,7 @@
 #include <Hapy/Assert.h>
 #include <Hapy/IoStream.h>
 
+#include <cstdlib> // for exit()
 #include <cstring>
 #include <errno.h>
 
