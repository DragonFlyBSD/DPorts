--- libcomm/comm_sock.c.orig	2012-01-11 19:56:10.000000000 +0200
+++ libcomm/comm_sock.c
@@ -1332,7 +1332,7 @@ comm_set_bindtodevice(xsock_t sock, cons
 
     return (XORP_OK);
 #else
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     // FreeBSD doesn't implement this, so no use filling logs with errors that can't
     // be helped.  Assume calling code deals with the error code as needed.
     XLOG_ERROR("setsockopt SO_BINDTODEVICE %s: %s",
