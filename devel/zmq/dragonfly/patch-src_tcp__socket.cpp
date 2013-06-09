--- src/tcp_socket.cpp.orig	2012-03-20 16:08:36.000000000 +0000
+++ src/tcp_socket.cpp
@@ -162,7 +162,8 @@ int zmq::tcp_socket_t::open (fd_t fd_, u
         errno_assert (rc == 0);
     }
 
-#if defined ZMQ_HAVE_OSX || defined ZMQ_HAVE_FREEBSD
+#if defined(ZMQ_HAVE_OSX) || \
+   (defined(ZMQ_HAVE_FREEBSD) && !defined(ZMQ_HAVE_DRAGONLY))
     int set = 1;
     int rc = setsockopt (s, SOL_SOCKET, SO_NOSIGPIPE, &set, sizeof (int));
     errno_assert (rc == 0);
