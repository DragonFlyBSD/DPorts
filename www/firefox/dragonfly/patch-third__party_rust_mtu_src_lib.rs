--- third_party/rust/mtu/src/lib.rs.orig	2026-09-04 00:01:30 UTC
+++ third_party/rust/mtu/src/lib.rs
@@ -152,7 +152,11 @@ mod test {
     }
 
     const LOOPBACK: [NameMtu; 2] = // [IPv4, IPv6]
-        if cfg!(any(target_os = "macos", target_os = "freebsd")) {
+        if cfg!(any(
+            target_os = "macos",
+            target_os = "freebsd",
+            target_os = "dragonfly"
+        )) {
             [NameMtu(Some("lo0"), 16_384), NameMtu(Some("lo0"), 16_384)]
         } else if cfg!(any(target_os = "linux", target_os = "android")) {
             [NameMtu(Some("lo"), 65_536), NameMtu(Some("lo"), 65_536)]
