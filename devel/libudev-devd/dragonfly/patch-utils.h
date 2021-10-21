--- utils.h.orig	2021-10-21 21:43:56 UTC
+++ utils.h
@@ -8,6 +8,8 @@
 #include <string.h>
 #include <unistd.h>
 
+#include "config.h"
+
 #ifdef HAVE_SYS_TREE_H
 #include <sys/tree.h>
 #else
