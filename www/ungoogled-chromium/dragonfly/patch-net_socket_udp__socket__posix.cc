--- net/socket/udp_socket_posix.cc.orig	2026-09-19 23:47:44 UTC
+++ net/socket/udp_socket_posix.cc
@@ -78,8 +78,14 @@
 #endif  // BUILDFLAG(IS_MAC)
 
 #if !defined(CMSG_ALIGN)
+#if defined(__DragonFly__)
+// DragonFly only exposes CMSG_ALIGN to the kernel; _CMSG_ALIGN is the
+// userland spelling. It has no _ALIGN in userland.
+#define CMSG_ALIGN(n) _CMSG_ALIGN(n)
+#else
 #define CMSG_ALIGN(n) _ALIGN(n)
 #endif
+#endif
 
 namespace net {
 
@@ -88,11 +94,37 @@
 constexpr int kBindRetries = 10;
 constexpr int kPortStart = 1024;
 constexpr int kPortEnd = 65535;
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || (BUILDFLAG(IS_BSD) && !BUILDFLAG(IS_DRAGONFLY))
 // Maximum number of UDP packets that can be read at a time from recvmmsg.
 constexpr size_t kMaxMmsgMessages = 128;
 #endif
 
+#if BUILDFLAG(IS_DRAGONFLY)
+int GetIPv4AddressFromIndex(int socket, uint32_t index, uint32_t* address) {
+  if (!index) {
+    *address = htonl(INADDR_ANY);
+    return OK;
+  }
+
+  sockaddr_in* result = nullptr;
+
+  ifreq ifr;
+  ifr.ifr_addr.sa_family = AF_INET;
+  if (!if_indextoname(index, ifr.ifr_name))
+    return MapSystemError(errno);
+  int rv = ioctl(socket, SIOCGIFADDR, &ifr);
+  if (rv == -1)
+    return MapSystemError(errno);
+  result = reinterpret_cast<sockaddr_in*>(&ifr.ifr_addr);
+
+  if (!result)
+    return ERR_ADDRESS_INVALID;
+
+  *address = result->sin_addr.s_addr;
+  return OK;
+}
+#endif
+
 int GetSocketFDHash(int fd) {
   return fd ^ 1595649551;
 }
@@ -499,7 +531,7 @@
   CHECK_GT(maximum_packet_size, 0u);
   CHECK_GE(buf_len, maximum_packet_size);
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || (BUILDFLAG(IS_BSD) && !BUILDFLAG(IS_DRAGONFLY))
   base::expected<DatagramsMetadata, Error> nread =
       InternalReadMultiple(buffer, buf_len, maximum_packet_size);
   if (nread.has_value() || nread.error() != ERR_IO_PENDING) {
@@ -1020,7 +1052,7 @@
   // This read API currently only supports connected UDP sockets.
   CHECK(is_connected_);
   CHECK(remote_address_);
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || (BUILDFLAG(IS_BSD) && !BUILDFLAG(IS_DRAGONFLY))
   return InternalRecvMmsg(buffer, buf_len / maximum_packet_size,
                           maximum_packet_size);
 #else
@@ -1028,7 +1060,7 @@
 #endif
 }
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || (BUILDFLAG(IS_BSD) && !BUILDFLAG(IS_DRAGONFLY))
 base::expected<DatagramsMetadata, Error> UDPSocketPosix::InternalRecvMmsg(
     IOBuffer* buffer,
     size_t num_messages,
@@ -1287,9 +1319,21 @@
   if (multicast_interface_ != 0) {
     switch (addr_family_) {
       case AF_INET: {
+        //
+        // DragonFly BSD does not define ip_mreqn and setsockopt() doesn't allow
+        // to use this struct to set options via imr_ifindex.
+        //
+#if defined(__FreeBSD__)
         ip_mreqn mreq = {};
         mreq.imr_ifindex = multicast_interface_;
         mreq.imr_address.s_addr = htonl(INADDR_ANY);
+#else
+        ip_mreq mreq = {};
+        int error = GetIPv4AddressFromIndex(socket_, multicast_interface_,
+                                            &mreq.imr_interface.s_addr);
+        if (error != OK)
+          return error;
+#endif    // defined(__FreeBSD__)
         int rv = setsockopt(socket_, IPPROTO_IP, IP_MULTICAST_IF,
                             reinterpret_cast<const char*>(&mreq), sizeof(mreq));
         if (rv)
@@ -1353,10 +1397,18 @@
     case IPAddress::kIPv4AddressSize: {
       if (addr_family_ != AF_INET)
         return ERR_ADDRESS_INVALID;
+#if defined(OS_BSD) && defined(__DragonFly__)
+      ip_mreq mreq = {};
+      int error = GetIPv4AddressFromIndex(socket_, multicast_interface_,
+                                          &mreq.imr_interface.s_addr);
+      if (error != OK)
+        return error;
+#else
       ip_mreqn mreq = {};
       mreq.imr_ifindex = multicast_interface_;
       mreq.imr_address.s_addr = htonl(INADDR_ANY);
       mreq.imr_multiaddr = ToInAddr(group_address);
+#endif
       int rv = setsockopt(socket_, IPPROTO_IP, IP_ADD_MEMBERSHIP,
                           &mreq, sizeof(mreq));
       if (rv < 0)
