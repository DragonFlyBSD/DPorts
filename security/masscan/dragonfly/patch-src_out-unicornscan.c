--- src/out-unicornscan.c.orig	2017-06-06 03:59:39 UTC
+++ src/out-unicornscan.c
@@ -11,6 +11,7 @@
 #include <WinSock2.h>
 #endif
 #include <ctype.h>
+#include <arpa/inet.h>
 
 #if _MSC_VER
 #define strdup _strdup
