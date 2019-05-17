--- libs/pbd/pathscanner.cc.orig	2009-02-24 14:38:16.000000000 +0200
+++ libs/pbd/pathscanner.cc
@@ -21,6 +21,7 @@
 #include <cstdlib>
 #include <cstdio>
 #include <cstring>
+#include <climits> // for PATH_MAX
 #include <vector>
 #include <dirent.h>
 #include <sys/types.h>
