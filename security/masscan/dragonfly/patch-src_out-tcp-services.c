--- src/out-tcp-services.c.orig	2021-01-31 09:13:30 UTC
+++ src/out-tcp-services.c
@@ -8,6 +8,7 @@
 #include <WinSock2.h>
 #endif
 #include <ctype.h>
+#include <arpa/inet.h>
 
 #if _MSC_VER
 #define strdup _strdup
