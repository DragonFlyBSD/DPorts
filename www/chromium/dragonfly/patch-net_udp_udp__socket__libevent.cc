--- net/udp/udp_socket_libevent.cc.orig	2014-05-14 19:22:14.000000000 +0000
+++ net/udp/udp_socket_libevent.cc
@@ -36,7 +36,7 @@ const int kBindRetries = 10;
 const int kPortStart = 1024;
 const int kPortEnd = 65535;
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(__DragonFly__)
 
 // Returns IPv4 address in network order.
 int GetIPv4AddressFromIndex(int socket, uint32 index, uint32* address){
@@ -569,7 +569,7 @@ int UDPSocketLibevent::SetSocketOptions(
   if (multicast_interface_ != 0) {
     switch (addr_family_) {
       case AF_INET: {
-#if !defined(OS_MACOSX)
+#if !defined(OS_MACOSX) && !defined(__DragonFly__)
         ip_mreqn mreq;
         mreq.imr_ifindex = multicast_interface_;
         mreq.imr_address.s_addr = htonl(INADDR_ANY);
@@ -644,7 +644,7 @@ int UDPSocketLibevent::JoinGroup(const I
       if (addr_family_ != AF_INET)
         return ERR_ADDRESS_INVALID;
 
-#if !defined(OS_MACOSX)
+#if !defined(OS_MACOSX) && !defined(__DragonFly__)
       ip_mreqn mreq;
       mreq.imr_ifindex = multicast_interface_;
       mreq.imr_address.s_addr = htonl(INADDR_ANY);
