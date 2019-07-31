--- src/ip.cpp.orig	2019-01-12 16:17:39 UTC
+++ src/ip.cpp
@@ -127,7 +127,8 @@ void zmq::enable_ipv4_mapping (fd_t s_)
 {
     LIBZMQ_UNUSED (s_);
 
-#if defined IPV6_V6ONLY && !defined ZMQ_HAVE_OPENBSD
+#if defined IPV6_V6ONLY && !defined ZMQ_HAVE_OPENBSD && \
+  !defined ZMQ_HAVE_DRAGONFLY
 #ifdef ZMQ_HAVE_WINDOWS
     DWORD flag = 0;
 #else
