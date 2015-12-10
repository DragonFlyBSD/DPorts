--- net/udp/udp_socket_posix.cc.orig	2015-11-24 20:00:55 UTC
+++ net/udp/udp_socket_posix.cc
@@ -37,7 +37,7 @@ const int kBindRetries = 10;
 const int kPortStart = 1024;
 const int kPortEnd = 65535;
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(__DragonFly__)
 
 // Returns IPv4 address in network order.
 int GetIPv4AddressFromIndex(int socket, uint32 index, uint32* address){
@@ -549,7 +549,7 @@ int UDPSocketPosix::SetMulticastOptions(
   if (multicast_interface_ != 0) {
     switch (addr_family_) {
       case AF_INET: {
-#if !defined(OS_MACOSX)
+#if !defined(OS_MACOSX) && !defined(__DragonFly__)
         ip_mreqn mreq;
         mreq.imr_ifindex = multicast_interface_;
         mreq.imr_address.s_addr = htonl(INADDR_ANY);
@@ -624,7 +624,7 @@ int UDPSocketPosix::JoinGroup(const IPAd
       if (addr_family_ != AF_INET)
         return ERR_ADDRESS_INVALID;
 
-#if !defined(OS_MACOSX)
+#if !defined(OS_MACOSX) && !defined(__DragonFly__)
       ip_mreqn mreq;
       mreq.imr_ifindex = multicast_interface_;
       mreq.imr_address.s_addr = htonl(INADDR_ANY);
