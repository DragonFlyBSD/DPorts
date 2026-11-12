--- third_party/rust/mtu/src/bsd.rs.orig	2026-10-22 23:18:00 UTC
+++ third_party/rust/mtu/src/bsd.rs
@@ -33,6 +33,7 @@
 )]
 #[cfg_attr(target_os = "macos", path = "bindings/macos.rs")]
 #[cfg_attr(target_os = "freebsd", path = "bindings/freebsd.rs")]
+#[cfg_attr(target_os = "dragonfly", path = "bindings/freebsd.rs")]
 #[cfg_attr(target_os = "netbsd", path = "bindings/netbsd.rs")]
 #[cfg_attr(target_os = "openbsd", path = "bindings/openbsd.rs")]
 #[cfg_attr(target_os = "solaris", path = "bindings/solaris.rs")]
@@ -57,7 +58,12 @@
 // See https://github.com/Arquivotheca/Solaris-8/blob/2ad1d32f9eeed787c5adb07eb32544276e2e2444/osnet_volume/usr/src/cmd/cmd-inet/usr.sbin/route.c#L238-L239
 const ALIGN: usize = size_of::<libc::c_long>();
 
-#[cfg(any(target_os = "macos", target_os = "freebsd", target_os = "openbsd"))]
+#[cfg(any(
+    target_os = "macos",
+    target_os = "freebsd",
+    target_os = "dragonfly",
+    target_os = "openbsd"
+))]
 asserted_const_with_type!(RTM_ADDRS, i32, RTA_DST, u32);
 
 #[cfg(any(target_os = "netbsd", target_os = "solaris"))]
@@ -72,7 +78,11 @@
 asserted_const_with_type!(AF_INET, AddressFamily, libc::AF_INET, i32);
 asserted_const_with_type!(AF_INET6, AddressFamily, libc::AF_INET6, i32);
 asserted_const_with_type!(AF_LINK, AddressFamily, libc::AF_LINK, i32);
+#[cfg(not(target_os = "dragonfly"))]
 asserted_const_with_type!(RTM_VERSION, u8, bindings::RTM_VERSION, u32);
+// The FreeBSD bindings say 5; DragonFly's route(4) rejects anything but 7.
+#[cfg(target_os = "dragonfly")]
+const RTM_VERSION: u8 = 7;
 asserted_const_with_type!(RTM_GET, u8, bindings::RTM_GET, u32);
 
 const_assert!(size_of::<sockaddr_in>() + ALIGN <= u8::MAX as usize);
