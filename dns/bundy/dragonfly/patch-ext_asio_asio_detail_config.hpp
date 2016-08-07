--- ext/asio/asio/detail/config.hpp.orig	2016-01-25 18:53:39.000000000 +0200
+++ ext/asio/asio/detail/config.hpp
@@ -138,6 +138,7 @@
 
 // Mac OS X, FreeBSD, NetBSD, OpenBSD: kqueue.
 #if (defined(__MACH__) && defined(__APPLE__)) \
+  || defined(__DragonFly__) \
   || defined(__FreeBSD__) \
   || defined(__NetBSD__) \
   || defined(__OpenBSD__)
