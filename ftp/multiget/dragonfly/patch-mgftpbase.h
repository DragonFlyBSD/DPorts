--- mgftpbase.h.intermediate	2016-09-02 19:14:05 UTC
+++ mgftpbase.h
@@ -27,6 +27,7 @@
 #include "common.h"
 #include "mgftpsocket.h"
 #include <string>
+#include <cstdio> // for sprintf sscanf etc
 
 /*
 CMgSocket -> CMgProxySocket -> CMgHttpSocket -> CMgHttpBase-> CMgHttpInfo
