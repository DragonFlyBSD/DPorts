--- panoptis/common.h.orig	2003-06-26 00:05:03.000000000 +0300
+++ panoptis/common.h
@@ -45,6 +45,9 @@ using namespace ost;
 #include <strings.h>
 #endif
 
+#include <cstdlib>
+#include <cstdio>
+
 // Only for syslog printing for the time being
 #define PANOPTIS_EXECNAME "panoptis"
 
