--- lib/c_glib/src/thrift/c_glib/transport/thrift_socket.c.orig	2021-02-04 23:07:31 UTC
+++ lib/c_glib/src/thrift/c_glib/transport/thrift_socket.c
@@ -71,7 +71,7 @@ thrift_socket_peek (ThriftTransport *tra
     {
       errno_copy = errno;
 
-      #if defined __FreeBSD__ || defined __MACH__
+      #if defined __FreeBSD__ || defined(__DragonFly__) || defined __MACH__
       /* FreeBSD returns -1 and ECONNRESET if the socket was closed by the other
          side */
       if (errno_copy == ECONNRESET)
@@ -88,7 +88,7 @@ thrift_socket_peek (ThriftTransport *tra
                    "failed to peek at socket - %s",
                    strerror (errno_copy));
 
-      #if defined __FreeBSD__ || defined __MACH__
+      #if defined __FreeBSD__ || defined(__DragonFly__) || defined __MACH__
       }
       #endif
     }
