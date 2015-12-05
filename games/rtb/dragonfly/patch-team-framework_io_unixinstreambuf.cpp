--- team-framework/io/unixinstreambuf.cpp.bak	2015-12-05 15:46:41.000000000 +0200
+++ team-framework/io/unixinstreambuf.cpp
@@ -32,6 +32,7 @@
 #include "../exceptions/keynotfoundexception.h"
 #include "../exceptions/confignotloadedexception.h"
 #include <sstream>
+#include <cstring>
 #include <errno.h>
 #include <sys/types.h>
 #include <unistd.h>
