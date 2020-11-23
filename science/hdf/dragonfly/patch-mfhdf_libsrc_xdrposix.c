--- mfhdf/libsrc/xdrposix.c.orig	2020-03-03 17:40:50 UTC
+++ mfhdf/libsrc/xdrposix.c
@@ -51,6 +51,8 @@ typedef NETLONG     netlong;
 # include <sys/types.h>
 #endif
 
+#include <arpa/inet.h>
+
 /*EIP #include "netcdf.h" */
 #include "mfhdf.h"
 
