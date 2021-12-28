The DragonFly BSD does not provide struct tcp_info

--- galerautils/src/gu_asio.hpp.orig	2021-07-22 15:29:52 UTC
+++ galerautils/src/gu_asio.hpp
@@ -462,7 +462,9 @@ namespace gu
         /**
          * Read tcp_info struct from the underlying TCP socket.
          */
+#ifndef __DragonFly__
         virtual struct tcp_info get_tcp_info() = 0;
+#endif
     };
 
     /**
