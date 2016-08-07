--- ext/asio/asio/impl/error_code.ipp.orig	2016-01-25 18:53:39.000000000 +0200
+++ ext/asio/asio/impl/error_code.ipp
@@ -96,7 +96,7 @@ std::string error_code::message() const
   using namespace std;
   return strerror(value_);
 #elif defined(__MACH__) && defined(__APPLE__) \
-|| defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__) \
+|| defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) \
 || defined(_AIX) || defined(__hpux) || defined(__osf__)
   char buf[256] = "";
   strerror_r(value_, buf, sizeof(buf));
