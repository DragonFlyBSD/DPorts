--- src/fdcache.cpp.orig	2021-08-08 05:01:19 UTC
+++ src/fdcache.cpp
@@ -21,6 +21,7 @@
 #include <cstdio>
 #include <cstdlib>
 #include <cerrno>
+#include <limits.h>
 #include <unistd.h>
 #include <sys/types.h>
 #include <dirent.h>
