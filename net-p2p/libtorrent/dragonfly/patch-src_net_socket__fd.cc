--- src/net/socket_fd.cc.orig	2019-07-17 20:10:37 UTC
+++ src/net/socket_fd.cc
@@ -126,40 +126,14 @@ SocketFd::get_error() const {
 
 bool
 SocketFd::open_stream() {
-  m_fd = socket(rak::socket_address::pf_inet6, SOCK_STREAM, IPPROTO_TCP);
-
-  if (m_fd == -1) {
-    m_ipv6_socket = false;
-    return (m_fd = socket(rak::socket_address::pf_inet, SOCK_STREAM, IPPROTO_TCP)) != -1;
-  }
-
-  m_ipv6_socket = true;
-
-  if (!set_ipv6_v6only(false)) {
-    close();
-    return false;
-  }
-
-  return true;
+  m_ipv6_socket = false;
+  return (m_fd = socket(rak::socket_address::pf_inet, SOCK_STREAM, IPPROTO_TCP)) != -1;
 }
 
 bool
 SocketFd::open_datagram() {
-  m_fd = socket(rak::socket_address::pf_inet6, SOCK_DGRAM, 0);
-
-  if (m_fd == -1) {
-    m_ipv6_socket = false;
-    return (m_fd = socket(rak::socket_address::pf_inet, SOCK_DGRAM, 0)) != -1;
-  }
-
-  m_ipv6_socket = true;
-
-  if (!set_ipv6_v6only(false)) {
-    close();
-    return false;
-  }
-
-  return true;
+  m_ipv6_socket = false;
+  return (m_fd = socket(rak::socket_address::pf_inet, SOCK_DGRAM, 0)) != -1;
 }
 
 bool
