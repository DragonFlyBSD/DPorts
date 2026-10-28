--- cargo-crates/netdev-0.31.0/src/interface/unix.rs.orig	2026-10-26 02:17:57 UTC
+++ cargo-crates/netdev-0.31.0/src/interface/unix.rs
@@ -141,6 +141,32 @@ pub fn interfaces() -> Vec<Interface> {
     interfaces
 }
 
+// gateway::bsd parses routing messages with FreeBSD/OpenBSD/NetBSD layouts;
+// DragonFly's rt_msghdr differs, so list the interfaces without a gateway.
+#[cfg(target_os = "dragonfly")]
+pub fn interfaces() -> Vec<Interface> {
+    let mut interfaces: Vec<Interface> = unix_interfaces();
+    let local_ip: IpAddr = match super::get_local_ipaddr() {
+        Some(local_ip) => local_ip,
+        None => return interfaces,
+    };
+    for iface in &mut interfaces {
+        iface.ipv4.iter().for_each(|ipv4| {
+            if IpAddr::V4(ipv4.addr()) == local_ip {
+                iface.dns_servers = get_system_dns_conf();
+                iface.default = true;
+            }
+        });
+        iface.ipv6.iter().for_each(|ipv6| {
+            if IpAddr::V6(ipv6.addr()) == local_ip {
+                iface.dns_servers = get_system_dns_conf();
+                iface.default = true;
+            }
+        });
+    }
+    interfaces
+}
+
 #[cfg(any(target_os = "linux", target_os = "android"))]
 pub(super) fn sockaddr_to_network_addr(
     sa: *mut libc::sockaddr,
@@ -178,6 +204,7 @@ pub(super) fn sockaddr_to_network_addr(
 #[cfg(any(
     target_os = "openbsd",
     target_os = "freebsd",
+    target_os = "dragonfly",
     target_os = "netbsd",
     target_os = "macos",
     target_os = "ios"
@@ -225,6 +252,7 @@ fn sockaddr_to_network_addr(sa: *mut libc::sockaddr) -> (Option<MacAddr>, Option
     target_os = "ios",
     target_os = "openbsd",
     target_os = "freebsd",
+    target_os = "dragonfly",
     target_os = "netbsd"
 ))]
 fn get_interface_type(addr_ref: &libc::ifaddrs) -> InterfaceType {
@@ -250,6 +278,7 @@ pub fn is_running(interface: &Interface) -> bool {
     target_os = "ios",
     target_os = "openbsd",
     target_os = "freebsd",
+    target_os = "dragonfly",
     target_os = "netbsd"
 ))]
 pub fn is_physical_interface(interface: &Interface) -> bool {
