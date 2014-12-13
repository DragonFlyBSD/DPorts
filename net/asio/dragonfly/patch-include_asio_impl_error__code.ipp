--- include/asio/impl/error_code.ipp.orig	2014-05-10 08:41:50 UTC
+++ include/asio/impl/error_code.ipp
@@ -98,6 +98,7 @@ public:
     using namespace std;
     return strerror(value);
 #elif defined(__MACH__) && defined(__APPLE__) \
+  || defined(__DragonFly__) \
   || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__) \
   || defined(_AIX) || defined(__hpux) || defined(__osf__) \
   || defined(__ANDROID__)
