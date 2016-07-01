--- src/openhbci/core/posix/socket.cpp.orig	2003-02-14 18:11:53.000000000 +0200
+++ src/openhbci/core/posix/socket.cpp
@@ -27,6 +27,7 @@
  ***************************************************************************/
 
 
+#include <cstring>
 #include <errno.h>
 #include <unistd.h>
 
