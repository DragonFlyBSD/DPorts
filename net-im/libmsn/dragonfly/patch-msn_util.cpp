--- msn/util.cpp.intermediate	2013-09-25 17:28:00.169379000 +0000
+++ msn/util.cpp
@@ -25,6 +25,7 @@
 #include <msn/util.h>
 #include <sstream>
 #include <errno.h>
+#include <unistd.h>
 #include <cctype>
 #include <fstream>
 #include <openssl/rand.h>
