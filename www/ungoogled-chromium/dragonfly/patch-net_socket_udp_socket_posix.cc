diff --git net/socket/udp_socket_posix.cc net/socket/udp_socket_posix.cc
index 5e8edb292c2..e8cf1a2e31c 100644
--- net/socket/udp_socket_posix.cc
+++ net/socket/udp_socket_posix.cc
@@ -75,6 +75,34 @@ const int kActivityMonitorBytesThreshold = 65535;
 const int kActivityMonitorMinimumSamplesForThroughputEstimate = 2;
 const base::TimeDelta kActivityMonitorMsThreshold = base::Milliseconds(100);
 
+
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
+
 #if BUILDFLAG(IS_APPLE) && !BUILDFLAG(CRONET_BUILD)
 
 // On macOS, the file descriptor is guarded to detect the cause of
@@ -888,9 +916,21 @@ int UDPSocketPosix::SetMulticastOptions() {
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
@@ -953,9 +993,17 @@ int UDPSocketPosix::JoinGroup(const IPAddress& group_address) const {
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
+#endif
       memcpy(&mreq.imr_multiaddr, group_address.bytes().data(),
              IPAddress::kIPv4AddressSize);
       int rv = setsockopt(socket_, IPPROTO_IP, IP_ADD_MEMBERSHIP,
