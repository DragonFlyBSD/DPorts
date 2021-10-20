--- libs/network/test/http/http_test_server.hpp.orig	2015-08-27 08:04:59.000000000 +0300
+++ libs/network/test/http/http_test_server.hpp
@@ -12,6 +12,10 @@
 #define BOOST_FILESYSTEM_VERSION 3
 #include <boost/filesystem.hpp>
 
+#ifdef __DragonFly__
+#undef MIN
+#endif
+
 #if defined(_WIN32) || defined(__WIN32__) || defined(WIN32) || defined(MIN)
 #include <windows.h>
 
