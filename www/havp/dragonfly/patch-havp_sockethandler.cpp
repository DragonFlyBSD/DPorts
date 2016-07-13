--- havp/sockethandler.cpp.orig	2009-05-17 15:25:13.000000000 +0300
+++ havp/sockethandler.cpp
@@ -24,6 +24,7 @@
 #include <unistd.h>
 #include <fcntl.h>
 #include <errno.h>
+#include <cstring>
 
 #ifndef INADDR_NONE
 #define INADDR_NONE ((unsigned long) -1)
