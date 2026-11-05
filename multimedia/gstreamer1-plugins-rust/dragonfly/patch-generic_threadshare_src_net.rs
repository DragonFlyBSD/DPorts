--- generic/threadshare/src/net.rs.orig
+++ generic/threadshare/src/net.rs
@@ -123,6 +123,14 @@
             }
             #[cfg(any(target_os = "openbsd", target_os = "dragonfly"))]
             {
+                use getifaddrs::Address;
+
+                let ip_addr = match &iface.address {
+                    Address::V4(ifaddr) => ifaddr.address,
+                    Address::V6(_) => return Err(io::Error::other("Interface address is IPv6")),
+                    Address::Mac(_) => return Err(io::Error::other("Interface address is Mac")),
+                };
+
                 let addr = in_addr {
                     s_addr: u32::from_ne_bytes(ip_addr.octets()),
                 };
