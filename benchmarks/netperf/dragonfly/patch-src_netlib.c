--- src/netlib.c.orig	2015-04-24 22:08:33 UTC
+++ src/netlib.c
@@ -816,7 +816,7 @@ int netperf_sendfile(SOCKET send_socket,
       sv.sfv_off = send_ring->offset;
       sv.sfv_len =  send_ring->length;
       len = sendfilev(send_socket, &sv, 1, &scratch_len);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined __DragonFly__
       /* so close to HP-UX and yet so far away... :) */
       ret = sendfile(send_ring->fildes,
 		     send_socket,
