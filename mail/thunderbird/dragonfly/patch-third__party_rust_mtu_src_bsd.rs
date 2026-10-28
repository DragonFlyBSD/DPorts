--- third_party/rust/mtu/src/bsd.rs.orig	2026-09-04 00:01:29 UTC
+++ third_party/rust/mtu/src/bsd.rs
@@ -33,6 +33,7 @@ use static_assertions::{const_assert, const_assert_eq}
 )]
 #[cfg_attr(target_os = "macos", path = "bindings/macos.rs")]
 #[cfg_attr(target_os = "freebsd", path = "bindings/freebsd.rs")]
+#[cfg_attr(target_os = "dragonfly", path = "bindings/freebsd.rs")]
 #[cfg_attr(target_os = "netbsd", path = "bindings/netbsd.rs")]
 #[cfg_attr(target_os = "openbsd", path = "bindings/openbsd.rs")]
 #[cfg_attr(target_os = "solaris", path = "bindings/solaris.rs")]
@@ -57,7 +58,12 @@ const ALIGN: usize = size_of::<libc::c_int>();
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
