--- src/system/osapi/posix/sysethtun.cc.orig	2006-10-11 18:37:51 UTC
+++ src/system/osapi/posix/sysethtun.cc
@@ -32,6 +32,7 @@
 #include <cstdlib>
 #include <cstring>
 #include <unistd.h>
+#include <sys/select.h>
 #include <sys/wait.h>
 
 #include "system/sysethtun.h"
