--- include/msgpack/sysdep.h.orig	2015-03-10 12:42:47 UTC
+++ include/msgpack/sysdep.h
@@ -77,7 +77,7 @@ typedef unsigned int _msgpack_atomic_cou
 
 #include <arpa/inet.h>  /* __BYTE_ORDER */
 #  if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && \
-       !(defined(__sun) && defined(__SVR4))
+       !defined(__DragonFly__) && !(defined(__sun) && defined(__SVR4))
 #    include <byteswap.h>
 #  endif
 
