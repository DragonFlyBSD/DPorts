--- team-framework/io/unixoutstreambuf.cpp.orig	2015-12-05 15:51:11.000000000 +0200
+++ team-framework/io/unixoutstreambuf.cpp
@@ -29,6 +29,7 @@
 
 #include "unixoutstreambuf.h"
 #include <sstream>
+#include <cstring>
 #include <errno.h>
 #include <sys/types.h>
 #include <unistd.h>
