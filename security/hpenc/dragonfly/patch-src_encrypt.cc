--- src/encrypt.cc.orig
+++ src/encrypt.cc
@@ -24,6 +24,7 @@
  */
 
 #include <sys/types.h>
+#include <stdexcept>
 #include <sys/stat.h>
 #include <fcntl.h>
 #include <unistd.h>
