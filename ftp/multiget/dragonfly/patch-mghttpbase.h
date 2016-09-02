--- mghttpbase.h.intermediate	2016-09-02 17:54:37 UTC
+++ mghttpbase.h
@@ -30,6 +30,7 @@
 #include "mghttpsocket.h"
 #include <string>
 #include <vector>
+#include <cstdio> // for sprintf sscanf etc
 
 /*
 CMgSocket -> CMgProxySocket -> CMgHttpSocket -> CMgHttpBase*-> CMgHttpInfo
