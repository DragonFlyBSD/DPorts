--- cargo-crates/netdev-0.31.0/src/interface/types.rs.orig	2026-10-26 02:17:57 UTC
+++ cargo-crates/netdev-0.31.0/src/interface/types.rs
@@ -131,6 +131,7 @@ impl InterfaceType {
         target_os = "macos",
         target_os = "openbsd",
         target_os = "freebsd",
+        target_os = "dragonfly",
         target_os = "netbsd",
         target_os = "ios"
     ))]
