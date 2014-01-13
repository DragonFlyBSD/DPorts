--- include/asio/impl/error_code.ipp.orig	2011-02-22 07:25:34.000000000 +0000
+++ include/asio/impl/error_code.ipp
@@ -15,6 +15,7 @@
 # pragma once
 #endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
 
+#include <cstring>
 #include "asio/detail/config.hpp"
 #include "asio/detail/local_free_on_block_exit.hpp"
 #include "asio/detail/socket_types.hpp"
@@ -94,7 +95,8 @@ std::string error_code::message() const
   return strerror(value_);
 #elif defined(__MACH__) && defined(__APPLE__) \
 || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__) \
-|| defined(_AIX) || defined(__hpux) || defined(__osf__)
+|| defined(_AIX) || defined(__hpux) || defined(__osf__) \
+|| defined(__DragonFly__)
   char buf[256] = "";
   strerror_r(value_, buf, sizeof(buf));
   return buf;
