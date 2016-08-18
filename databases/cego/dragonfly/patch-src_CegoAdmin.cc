--- src/CegoAdmin.cc.orig	2016-07-22 10:44:48.000000000 +0300
+++ src/CegoAdmin.cc
@@ -43,6 +43,7 @@
 #include <string.h>
 #include <readline/readline.h>
 #include <readline/history.h>
+#include <cstdlib>
 
 #define USAGE "Usage: cgadm --user=<user>/<password>\n\
    [ --server=<host>]\n\
