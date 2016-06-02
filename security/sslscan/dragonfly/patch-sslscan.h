--- sslscan.h.orig	2016-04-09 21:47:32 UTC
+++ sslscan.h
@@ -37,6 +37,8 @@
 #ifndef HAVE_SSLSCAN_H_
 #define HAVE_SSLSCAN_H_
 
+#include <netinet/in.h>
+
 // Defines...
 #define false 0
 #define true 1
