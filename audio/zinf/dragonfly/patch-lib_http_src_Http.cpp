--- lib/http/src/Http.cpp.intermediate	2016-06-24 19:38:18.000000000 +0300
+++ lib/http/src/Http.cpp
@@ -40,6 +40,7 @@ ________________________________________
 #include <fcntl.h>    
 #include <errno.h>    
 #include <ctype.h>    
+#include <cstring>
 
 #ifdef WIN32
 #include <io.h>
