--- src/debug.cpp.orig	2017-04-01 18:01:51 UTC
+++ src/debug.cpp
@@ -40,6 +40,7 @@
 #include <stdio.h>
 #include <string.h>
 #include <stdarg.h>
+#include <stdint.h>
 
 #include <glibmm/ustring.h>
 #include <glibmm/miscutils.h>
@@ -158,7 +159,7 @@ namespace utils {
 //    static boost::recursive_mutex mutex;
 //    boost::recursive_mutex::scoped_lock lock(mutex);
     char buf[128];
-    snprintf(buf, 128, "(%lu) ", (pthread_t)pthread_self());
+    snprintf(buf, 128, "(%ju) ", (uintmax_t)pthread_self());
     fwrite(buf, 1, strlen(buf), file);
     fwrite(prefix, 1, strlen(prefix), file);
 
