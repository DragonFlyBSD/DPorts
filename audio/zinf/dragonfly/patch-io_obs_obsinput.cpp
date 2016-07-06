--- io/obs/obsinput.cpp.intermediate	2016-07-06 09:26:32 UTC
+++ io/obs/obsinput.cpp
@@ -42,6 +42,7 @@ ________________________________________
 #include <arpa/inet.h> 
 #include <netdb.h>
 #include <fcntl.h>
+#include <limits.h> // for PATH_MAX
 #endif
 
 
