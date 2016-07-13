--- src/driver_mysql/mysqlConnection.h.intermediate	2016-07-13 12:45:06 UTC
+++ src/driver_mysql/mysqlConnection.h
@@ -26,6 +26,9 @@
 
 #include <string>
 #include <time.h>
+extern "C" {
+#include <strings.h>
+}
 
 #include "dbconnectTypes.h"
 #include "baseConnection.h"
