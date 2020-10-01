--- lib/transport/transport-udp-socket.c.orig	2020-08-10 18:04:39 UTC
+++ lib/transport/transport-udp-socket.c
@@ -40,7 +40,7 @@ struct _LogTransportUDP
 
 #if defined(SYSLOG_NG_HAVE_CTRLBUF_IN_MSGHDR)
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 GSockAddr *
 _extract_dest_ip4_addr_from_cmsg(struct cmsghdr *cmsg, GSockAddr *bind_addr)
@@ -190,7 +190,7 @@ log_transport_udp_setup_fd(LogTransportU
 
   if (self->super.address_family == AF_INET)
     {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
       setsockopt(fd, IPPROTO_IP, IP_RECVDSTADDR, &on, sizeof(on));
 #else
       setsockopt(fd, IPPROTO_IP, IP_PKTINFO, &on, sizeof(on));
