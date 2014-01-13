--- include/asio/detail/config.hpp.orig	2011-02-22 07:25:34.000000000 +0000
+++ include/asio/detail/config.hpp
@@ -138,6 +138,7 @@
 
 // Mac OS X, FreeBSD, NetBSD, OpenBSD: kqueue.
 #if (defined(__MACH__) && defined(__APPLE__)) \
+  || defined(__DragonFly__) \
   || defined(__FreeBSD__) \
   || defined(__NetBSD__) \
   || defined(__OpenBSD__)
