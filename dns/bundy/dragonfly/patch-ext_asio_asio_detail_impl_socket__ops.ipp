--- ext/asio/asio/detail/impl/socket_ops.ipp.orig	2016-01-25 18:53:39.000000000 +0200
+++ ext/asio/asio/detail/impl/socket_ops.ipp
@@ -94,7 +94,7 @@ socket_type accept(socket_type s, socket
   if (new_s == invalid_socket)
     return new_s;
 
-#if defined(__MACH__) && defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__MACH__) && defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
   int optval = 1;
   int result = error_wrapper(::setsockopt(new_s,
         SOL_SOCKET, SO_NOSIGPIPE, &optval, sizeof(optval)), ec);
@@ -1147,7 +1147,7 @@ socket_type socket(int af, int type, int
   ec = asio::error_code();
 
   return s;
-#elif defined(__MACH__) && defined(__APPLE__) || defined(__FreeBSD__)
+#elif defined(__MACH__) && defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
   socket_type s = error_wrapper(::socket(af, type, protocol), ec);
   if (s == invalid_socket)
     return s;
@@ -1241,7 +1241,7 @@ int setsockopt(socket_type s, state_type
     ec = asio::error_code();
 
 #if defined(__MACH__) && defined(__APPLE__) \
-  || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+  || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     // To implement portable behaviour for SO_REUSEADDR with UDP sockets we
     // need to also set SO_REUSEPORT on BSD-based platforms.
     if ((state & datagram_oriented)
@@ -1463,7 +1463,7 @@ int ioctl(socket_type s, state_type& sta
 #if defined(BOOST_WINDOWS) || defined(__CYGWIN__)
   int result = error_wrapper(::ioctlsocket(s, cmd, arg), ec);
 #elif defined(__MACH__) && defined(__APPLE__) \
-  || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+  || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
   int result = error_wrapper(::ioctl(s,
         static_cast<unsigned int>(cmd), arg), ec);
 #else
