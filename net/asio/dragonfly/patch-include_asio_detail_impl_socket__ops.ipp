--- include/asio/detail/impl/socket_ops.ipp.orig	2011-02-22 07:25:34.000000000 +0000
+++ include/asio/detail/impl/socket_ops.ipp
@@ -93,7 +93,8 @@ socket_type accept(socket_type s, socket
   if (new_s == invalid_socket)
     return new_s;
 
-#if defined(__MACH__) && defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__MACH__) && defined(__APPLE__) || defined(__FreeBSD__) \
+ || defined(__DragonFly__)
   int optval = 1;
   int result = error_wrapper(::setsockopt(new_s,
         SOL_SOCKET, SO_NOSIGPIPE, &optval, sizeof(optval)), ec);
